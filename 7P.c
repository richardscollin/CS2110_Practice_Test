#include <stdlib.h>

size_t getAlloc(void *ptr) {
    return 0;
}

void * my_realloc(void *ptr, size_t newsize) {
    if (ptr == NULL) return malloc(newsize);
    if (newsize == 0) {
        free(ptr);
        return 0;
    }
    if (getAlloc(ptr) >= newsize) return ptr;

    void *newptr;
    if ((newptr = malloc(newsize)) == NULL) {
        return NULL;
    }

    size_t size = getAlloc(ptr);
    char *current = ptr;
    char *result = newptr;
    int i;
    for (i = 0; i < size; i++) {
        result[i] = current[i];
    }
    free(ptr);
    return newptr;
}
