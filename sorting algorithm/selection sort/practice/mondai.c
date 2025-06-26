#include <stdio.h>

void selection_sort(?,?)
{
    
}
int main(void)
{
    int array[10] = {2, 1, 8, 5, 4, 7, 9, 0, 6, 3};
    int i;

    printf("Before sort: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    selection_sort(array, 10);

    printf("After sort: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}