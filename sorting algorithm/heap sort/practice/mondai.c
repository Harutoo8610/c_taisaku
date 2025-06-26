#include <stdio.h>
/* 値を入れ替える関数 */
void swap(int *x, int *y)
{
    int temp; // 値を一時保存する変数
    temp = *x;
    *x = *y;
    *y = temp;
}

void pushdown(?,?,?)//一つの木をヒープ構成に
{
    
    }
}

/* ヒープソート */
void heap_sort(?,?)
{
    
}

int main(void)
{
    int array[11] = {0, 2, 1, 8, 5, 4, 7, 9, 10, 6, 3};
    int i;
    printf("Before sort: ");
    for (i = 1; i < 11; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    heap_sort(array, 10);
    printf("After sort: ");
    for (i = 1; i < 11; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}