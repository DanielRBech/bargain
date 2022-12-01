cmake_minimum_required(VERSION 3.23)
project(bargain C)

set(CMAKE_C_STANDARD 99)

add_executable(
        bargain bargain.c
        functions/prints.c header/prints.h
        functions/start_function.c header/start_function.h
        functions/settings.c header/settings.h
        functions/store_filter.c header/store_filter.h
        functions/product_filter.c header/product_filter.h
        functions/exit_program.c header/exit_program.h
        functions/shopping_list.c header/shopping_list.h
        functions/remove_product.c header/remove_product.h
        functions/search_function.c header/search_function.h
        functions/product_string.c header/product_string.h
        )
