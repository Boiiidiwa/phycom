#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, i;
    int *arr;

    scanf("%d", &size);

    arr = (int *) malloc(size * sizeof(int));

    for (i = 0; i < size; i++)
        *(arr + i) = i + 1;

    int *ptr = arr;

    printf("Array elements in order: ");
    while (ptr < arr + size)
    {
        printf("%d ", *ptr);
        ptr++;
    }

    printf("\nArray elements in reverse: ");

    ptr--;

    while (ptr >= arr)
    {
        printf("%d ", *ptr);
        ptr--;
    }

    printf("\n");

    free(arr);

    return 0;
}
