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
    int i, j, pivot;
    i = left;
    j = right + 1;
    pivot = left; // 先頭要素をpivotとする

    do
    {
        do{i++;} while (array[i] < array[pivot]);//do ブロックを 1 回必ず実行。次にwhile の条件を判定。条件が偽になると脱出
        do{j--;} while (array[pivot] < array[j]);//do ブロックを 1 回必ず実行。j--。だからｊの初期値がj = right + 1;なんだよね。
        // pivotより小さいものを左へ、大きいものを右へ
        if (i < j)
        {
            swap(&array[i], &array[j]);
        }
    } while (i < j);//break で抜けた瞬間は必ず i >= j
    //i は「pivot 以上」にぶつかった位置（もはや右グループ側）
    //j は「pivot 以下」にぶつかった位置（まだ左グループ側）

    swap(&array[pivot], &array[j]); // pivotを更新

    return j;
}

/* クイックソート */
void quick_sort(int array[], int left, int right)
{
    int pivot;

    if (left < right)
    {
        pivot = partition(array, left, right);
        quick_sort(array, left, pivot - 1); // pivotを境に再帰的にクイックソート
        quick_sort(array, pivot + 1, right);
    }
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
