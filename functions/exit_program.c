#include "../header/exit_program.h"
#include <stdio.h>
#include <stdlib.h>

void exit_program()
{
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

    printf(text);

    exit(0);
}