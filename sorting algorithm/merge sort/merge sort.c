#include <stdio.h>

/* ----------  マージソート本体  ---------- */
void merge_sort(int array[], int left, int right)
{
    int i, j, k, mid;
    int work[10];
    if (left < right)/* 区間に 2 個以上あるときだけ処理 */
    {
        mid = (left + right) / 2; /* 真ん中のインデックス */

        /* ------- ① 分割して再帰 -------- */
        merge_sort(array, left, mid);      /* 左半分を整列                */
        merge_sort(array, mid + 1, right); /* 右半分を整列               */

        /* ------- ② work[] へコピー ------ */
        /* 左ブロックをそのまま（＊後ろから前へ）写す  */
        for (i = mid; i >= left; i--)
        {
            work[i] = array[i]; /* work[left … mid] は昇順      */
        }
        /* 右ブロックは“逆順”にコピー（境界チェックを簡単にするため） */
        for (j = mid + 1; j <= right; j++)
        {
            work[right - (j - (mid + 1))] = array[j]; /* work[mid+1 … right] 降順 */
        }

        /* ------- ③ マージ処理 -------- */
        i = left;  /* 左ブロックの先頭ポインタ（前へ進む）   */
        j = right; /* 右ブロックの先頭ポインタ（後ろへ進む） */

        for (k = left; k <= right; k++)//work[] は以下のように 左側の部分が昇順、右側の部分が降順。ここがややこしいんだよね。普通にマージすればいいのにいちいち昇順配列と降順配列で比較するからさ
        { /* array[left … right] を再構築 */
            if (work[i] < work[j])
            {
                array[k] = work[i++]; /* 小さい方を出力→i を進める   */
                //array[k] = work[i];　i++ と同義
            }
            else
            {
                array[k] = work[j--]; /* 右が小さければ j を戻す     */
                //array[k] = work[j];　j-- と同義
            }
        }
    }
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