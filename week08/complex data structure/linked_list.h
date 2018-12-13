
#ifndef COMPLEX_DATA_STRUCTURE_LINKED_LIST_H
#define COMPLEX_DATA_STRUCTURE_LINKED_LIST_H
typedef struct node {
    int value; //void*
    struct node *next;
} node_t;

node_t *init_linked_list();

void push_end_list(node_t *head, int value);

void print_list(node_t * head);

node_t* push_begining_list(node_t *head, int value);

#endif //COMPLEX_DATA_STRUCTURE_LINKED_LIST_H
