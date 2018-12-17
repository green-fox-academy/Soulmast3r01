#include <SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
const int SCREEN_HEIGHT_LINKED_LIST = 481;
const int SCREEN_WIDTH_LINKED_LIST = 641;
node_t *init_linked_list() {
    node_t *node = malloc(sizeof(node_t));
    return node;
}

void push_end_list(node_t *head, int value) {
    node_t *current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    node_t *neew_node = malloc(sizeof(node_t));
    current->next = neew_node;
    neew_node->value = value;
    neew_node->next = NULL;
}

void print_list(node_t *head) {
    node_t *current = head;

    while (current != NULL) {
        printf("%d\n", current->value);
        current = current->next;
    }
}

node_t *push_begining_list(node_t *head, int value) {
    node_t *new_node = malloc(sizeof(node_t));

    new_node->value = value;
    new_node->next = head;
    return new_node;
}

void draw_linked_list(node_t *head, SDL_Renderer* gRenderer)
{
    node_t *current = head;
    int start_point = 10;
    int counter = 0;
    int size_width = 100;
    int size_height = 50;
    int elem_distance = size_width + 50 / 2;
    while (current != NULL) {
        int x =  10 + counter * elem_distance;
        int y =  SCREEN_HEIGHT_LINKED_LIST / 2 - size_height / 2;
        SDL_SetRenderDrawColor(gRenderer, 0x00, 0xFF, 0x00, 0xFF);
        SDL_Rect rectToDraw = { x, y, size_width, size_height};
        SDL_RenderDrawRect(gRenderer, &rectToDraw);

        SDL_RenderDrawLine(gRenderer,
                           x + size_width / 2,
                           y,
                           x + size_width / 2,
                           y + size_height);

        SDL_RenderDrawLine(gRenderer,
        start_point + size_width * 3 / 4,
        SCREEN_HEIGHT_LINKED_LIST / 2,
        start_point + size_width * 3 / 4 + 50,
        SCREEN_HEIGHT_LINKED_LIST / 2);

        current = current->next;
        counter++;
    }
}
