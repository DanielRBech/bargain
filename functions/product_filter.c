
#include "../header/product_filter.h"
#include "../header/exit_program.h"
#include "../header/settings.h"
#include "../header/prints.h"
#include <stdio.h>
#include <stdlib.h>

void product_filter()
{
    FILE    *textfile;
    char    *text;
    long    numbytes;
    int choice = 0;

    textfile = fopen("product.txt", "r");
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

    product_filter_print();

    scanf("%d", &choice);

    switch (choice) {
        case 0:
            settings();
            break;
        case 99:
            exit_program();
            break;
    }
}
