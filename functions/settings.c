#include "../header/settings.h"
#include "../header/start_function.h"
#include "../header/prints.h"
#include "../header/exit_program.h"
#include "../header/product_filter.h"
#include "../header/store_filter.h"
#include <stdio.h>

void settings()
{
    int choice = 0;
    settings_print();
    scanf("%d", &choice);
    if(choice == 1)
    {
        store_filter();
    }
    else if(choice == 2)
    {
        product_filter();
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
        settings();
    }
}