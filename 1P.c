#include <stdlib.h>
#include <stdio.h>

int visibleInAnotherFile;
static int onlyVisibleInThisFile;
const int readOnlyInt;
volatile int mightChangeOnItsOwn;

int main(int argc, char const* argv[])
{
    int automaticVariable;
    static int persistantFromCallToCall;
    const int valueShouldNotChange;

    int *ptr = malloc(sizeof(int) * 100);

    printf("Code is located at %p\n", main);
    printf("Static area is located at %p\n", &visibleInAnotherFile);
    printf("Stack is located at %p\n", &automaticVariable);
    printf("argc is at %p and argv is at %p\n", &argc, &argv);
    printf("Heap is at %p\n", ptr);

    free(ptr);
    return 0;
}

