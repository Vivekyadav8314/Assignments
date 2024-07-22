#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *ptr1, *ptr2, *ptr3;

    // Using malloc()
    ptr1 = (int*) malloc(5 * sizeof(int));
    if (ptr1 == NULL) {
        printf("Memory allocation failed\n");
        return -1;
    }
    for (int i = 0; i < 5; i++) {
        ptr1[i] = i * 2;
    }

    // Using calloc()
    ptr2 = (int*) calloc(5, sizeof(int));
    if (ptr2 == NULL) {
        printf("Memory allocation failed\n");
        return -1;
    }
    for (int i = 0; i < 5; i++) {
        ptr2[i] = i * 3;
    }
     // Using realloc()
    ptr3 = (int*) realloc(ptr1, 10 * sizeof(int));
    if (ptr3 == NULL) {
        printf("Memory allocation failed\n");
        return -1;
        }
    for (int i = 5; i < 10; i++) {
        ptr3[i] = i * 4;
    }

    // Freeing memory
//    free(ptr2);
  //  free(ptr3);

    return 0;
}
