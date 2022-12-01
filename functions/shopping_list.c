
#include <stdio.h>
#include <stdlib.h>
#include "../header/shopping_list.h"
#include "../header/prints.h"
#include "../header/exit_program.h"
#include "../header/start_function.h"
#include "../header/search_function.h"
#include "../header/remove_product.h"

void shopping_list()
{
    int choice = 0;
    FILE    *textfile;
    char    *text;
    long    numbytes;


    textfile = fopen("shopping_list.txt", "r");
    if(textfile == NULL)
    {
        exit(1);
    }

    fseek(textfile, 0L, SEEK_END);
    numbytes = ftell(textfile);
    fseek(textfile, 0L, SEEK_SET);

    text = (char*)calloc(numbytes, sizeof(char));
    if(text == NULL)
    {
        exit(1);
    }

    fread(text, sizeof(char), numbytes, textfile);
    fclose(textfile);

    printf(text); // Printing the file content (shopping_list.txt)

    shopping_list_print();


    scanf("%d", &choice);
    if(choice == 1)
    {
        search_function();
    }
    else if(choice == 2)
    {
        remove_product();
    }
    else if(choice == 0)
    {
        start_function();
    }
    else if(choice == 99)
    {
        exit_program();
    }
    else
    {
        invalid_print();
        shopping_list();
    }
}