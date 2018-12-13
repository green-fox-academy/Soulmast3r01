#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main() {
    node_t* head = malloc(sizeof(node_t));
    head->value = 5;
    head->next = NULL;

    push_end_list(head,9);
    print_list(head);
    printf("----------------------------------------------------\n");
    head = push_begining_list(head,6);
    print_list(head);
    printf("----------------------------------------------------\n");
    return 0;
}