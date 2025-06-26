#include <stdio.h>

/* 値を入れ替える関数 */
void swap(int *x, int *y)
{
    int temp; // 値を一時保存する変数

    temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int array[], int left, int right)
{
    
}

/* クイックソート */
void quick_sort(?,?,?)
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

    quick_sort(array, 0, 9);

    printf("After sort: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
