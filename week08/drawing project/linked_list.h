#include <SDL.h>
#ifndef LINE_IN_THE_MIDDLE_LINKED_LIST_H
#define LINE_IN_THE_MIDDLE_LINKED_LIST_H
typedef struct node {
    int value;
    struct node *next;
} node_t;

node_t *init_linked_list();

void push_end_list(node_t *head, int value);

void print_list(node_t * head);

node_t* push_begining_list(node_t *head, int value);

void draw_linked_list(node_t * head, SDL_Renderer* gRenderer);

#endif //LINE_IN_THE_MIDDLE_LINKED_LIST_H
