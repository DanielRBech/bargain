#include "../header/search_function.h"
#include "../header/prints.h"
#include "../header/start_function.h"
#include "../header/exit_program.h"
#include "../header/product_string.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void search_function()
{
    char *product_name[20];
    search_product_print();
    char exit_node[] = {"99"};
    char start_node[] = {"0"};

    scanf(" %s", *product_name);

    if(strcmp(*product_name, start_node) == 0)
    {
        start_function();
    }
    else if(strcmp(*product_name, exit_node) == 0)
    {
        exit_program();
    }
    else
    {
        product_string(product_name);
    }
}