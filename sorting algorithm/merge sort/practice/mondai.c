#include <stdio.h>

/* ----------  マージソート本体  ---------- */
void merge_sort(int array[], int left, int right)
{
    
}

/* ----------  動作確認用 main ---------- */
int main(void)
{
    int array[10] = {2, 1, 8, 5, 4, 7, 9, 0, 6, 3};
    int i;
    printf("Before sort: ");
    for (i = 0; i < 10; i++)
        printf("%d ", array[i]);
    printf("\n");

    merge_sort(array, 0, 9); /* 配列全体を整列 */

    printf("After  sort: ");
    for (i = 0; i < 10; i++)
        printf("%d ", array[i]);
    printf("\n");

    return 0;
}