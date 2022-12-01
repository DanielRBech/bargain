#include <stdio.h>

#include "../header/start_function.h"
#include "../header/prints.h"
#include "../header/search_function.h"
#include "../header/settings.h"
#include "../header/shopping_list.h"
#include "../header/exit_program.h"


void start_function()
{
    int choice;
    welcome_print();
    scanf("%d", &choice);
    if(choice == 1)
    {
        search_function();
    }
    else if(choice == 2)
    {
        shopping_list();
    }
    else if(choice == 3)
    {
        settings();
    }
    else if(choice == 99)
    {
        exit_program();
    }
    else
    {
        invalid_print();
        start_function();
    }
}