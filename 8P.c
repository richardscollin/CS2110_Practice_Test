#include <stdlib.h>

typedef struct node {
    void *data;
    struct node *prev;
    struct node *next;
} NODE;

typedef struct {
    NODE *head;
    NODE *tail;
} LIST;

void clear(LIST *list, void (*remove)(void *data)) {
    if (list == NULL) return;

    NODE *current;
    NODE *next;
    for (current = list->head; current != NULL; current = next) {
        next = current->next;
        remove(current->data);
        free(current);
    }

    list->head = list->tail = NULL;
}
