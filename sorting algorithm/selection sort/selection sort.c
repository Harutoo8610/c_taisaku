#include <stdio.h>

void selection_sort(int data[], int n)
{
    int tmp, min;
    for (int i = 0; i < n - 1; i += 1)
    {
        min = i; // 配列の先頭を最小値の要素
        for (int j = i + 1; j < n; j += 1)//iが０の時は1～n-1までのdata[j]をdata[min]と比較して一番小さい値の位置ｊをminにセット
        {//forを最後まで回して、一番小さい値の位置がわかったら下にあるようにdata[i] と data[min] の入れ替えを行う
            if (data[j] < data[min])
            {            // 暫定の最小値以下なら最小値を更新
                min = j; // 最小値を持つ
            }
        } // min は最小値の要素

        // data[i] と data[min] の入れ替え
        tmp = data[i];
        data[i] = data[min];
        data[min] = tmp;
        // 入れ替え終わり
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

    selection_sort(array, 10);

    printf("After sort: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}