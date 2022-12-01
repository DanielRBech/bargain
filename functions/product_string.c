
#include "../header/product_string.h"
#include "../header/search_function.h"
#include "../header/exit_program.h"
#include "../header/shopping_list.h"
#include "../header/prints.h"
#include <stdlib.h>
#include <stdio.h>
void product_string(char* product_name[])
{

    FILE    *textfile;
    char    *text;
    long    numbytes;
    int choice = 0;

    textfile = fopen("data.txt", "r");
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

    printf(text);


    product_string_print();

    scanf("%d", &choice);

    switch (choice) {
        case 0:
            search_function();
            break;
        case 99:
            exit_program();
            break;
    }
}