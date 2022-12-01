
#include <stdio.h>
#include <stdlib.h>
#include "../header/remove_product.h"
#include "../header/shopping_list.h"
#include "../header/exit_program.h"
#include "../header/prints.h"

void remove_product()
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

    remove_product_print();

    scanf("%d", &choice);

    if( choice > 0 && choice < 99)
    {

        remove_product();
    }
    else if( choice == 0)
    {
        shopping_list();
    }
    else if(choice == 99)
    {
        exit_program();
    }
    else
    {
        invalid_print();
        remove_product();
    }
}