#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
node_t* init_linked_list()
{
    node_t* node = malloc(sizeof(node_t));
    return node;
}
void push_end_list(node_t *head, int value){
    node_t * current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    node_t * neew_node = malloc(sizeof(node_t));
    current->next = neew_node;
    neew_node->value = value;
    neew_node->next = NULL;
}
void print_list(node_t * head) {
    node_t * current = head;

    while (current != NULL) {
        printf("%d\n", current->value);
        current = current->next;
    }
}
node_t* push_begining_list(node_t *head, int value)
{
    node_t * new_node = malloc(sizeof(node_t));

    new_node->value = value;
    new_node->next = head;
    return new_node;
}


