#include <stdio.h>

#define NUM_DATA 10

int rad[NUM_DATA];    /* 基数をしまう配列  */
int y[NUM_DATA];      /* 作業用配列 */

  /* 基数ソートを行う */
void radixsort(int x[ ], int n, int r)  /* x[ ]：ソートするデータ */
{                                       /* n：データの数 */
    
}

/* ----------  動作確認用 main ---------- */
int main(void)
{
    int array[NUM_DATA] = {5489, 1473, 7853, 1058, 9448,
                        1118, 7979, 2163, 1856, 3117};
    int n = 10;
    int r = 1000;
    printf("Before sort: ");
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");

    radixsort(array, n,r); /* 配列全体を整列 */

    printf("After  sort: ");
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");

    return 0;
}