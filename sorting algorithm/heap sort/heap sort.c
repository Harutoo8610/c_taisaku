#include <stdio.h>
/* 値を入れ替える関数 */
void swap(int *x, int *y)
{
    int temp; // 値を一時保存する変数
    temp = *x;
    *x = *y;
    *y = temp;
}
// pushdouwn操作
void pushdown(int array[], int first, int last)//一つの木をヒープ構成に
{
    int parent = first;     // 親
    int child = 2 * parent; // 左の子
    while (child <= last)
    {
        if ((child < last) && (array[child] < array[child + 1]))
        {
            child++; // 右の子の方が大きいとき、右の子を比較対象に設定
        }
        if (array[child] <= array[parent])
        {
            break;// ヒープ済み
        } 
        swap(&array[child], &array[parent]);
        parent = child;
        child = 2 * parent;
    }
}

/* ヒープソート */
void heap_sort(int array[], int array_size)
{
    int i;
    for (i = array_size / 2; i >= 1; i--)
    {
        pushdown(array, i, array_size); // 全体をヒープ化.これで最大のやつが頂点に来るだけ。次のfor文の準備として最大の値を頂点に持ってく
    }
    for (i = array_size; i >= 2; i--)
    {
        swap(&array[1], &array[i]); // 最大のものを最後のやつと交換
        pushdown(array, 1, i - 1);  // 最後の最大の値を除いてヒープ再構築
    }//これを繰り返すと昇順の配列が出来上がる
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