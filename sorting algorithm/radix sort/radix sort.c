#include <stdio.h>

#define NUM_DATA 10

int rad[NUM_DATA];    /* 基数をしまう配列  */
int y[NUM_DATA];      /* 作業用配列 */

  /* 基数ソートを行う */
void radixsort(int x[ ], int n, int r)  /* x[ ]：ソートするデータ */
{                                       /* n：データの数 */
    int i, j, k;                        /* r：基数を取り出す最大値 */
    int m = 1;                          /* 基数を取り出す桁 */

    while (m <= r) {
        for (i = 0; i < n; i++)
            rad[i] = (x[i] / m) % 10;   /* 基数を取り出し rad[i] に保存 */
            /*mが1の時：x[i] = 5489, rad[i] = (5489 / 1) % 10 = 5489 % 10 = 9*/
            /*mが10の時：x[i] = 5489, rad[i] = (5489 / 10) % 10 = 548 % 10 = 8*/
            /*mが100の時：x[i] = 5489, rad[i] = (5489 / 100) % 10 = 54 % 10 = 4*/
            /*mが1000の時：x[i] = 5489, rad[i] = (5489 / 1000) % 10 = 5 % 10 = 5*/

        k = 0;                          /* 配列の添字として使う */
        for (i = 0; i <= 9; i++)        /* 基数は 0 から 9 */
            for (j = 0; j < n; j++)
                if (rad[j] == i)        /* 基数の小さいものから */
                    y[k++] = x[j];      /* y[ ] にコピー */

        for (i = 0; i < n; i++)
            x[i] = y[i];                /* x[ ] にコピーし直す */

        m *= 10;                        /*  基数を取り出す桁を一つ上げる */
    }
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