//
// Created by Hugh O'Reilly on 2/8/20.
//

#include <stdio.h>
#include <stdlib.h>

#include "precision.h"

Integer
create_integer(int value) {
        Integer new_int = malloc(sizeof(Integer));
        new_int->value = value;
        new_int->rest = NULL;
        return new_int;
}

Integer
destroy_integer(Integer integer) {
        Integer current_node = integer;
        Integer prev_node = NULL;
        while (current_node != NULL) {
                prev_node = current_node;
                current_node = current_node->rest;
                free(prev_node);
        }
}

int
main(void) {
        printf("hello\n");
}
