#include <stdio.h>

void insertion_sort(int data[], int n) {
    int j, tmp;
    for(int i = 1; i <= n; i += 1) {
        j = i;
 
        // 適切な位置に入れ、整列済データを増やす
        // while(j > 0 && data[j-1] < data[j]) に変えると降順ソートになる
        while(j > 0 && data[j-1] > data[j]) { 
         
            // data[j-1] と data[j] の入れ替え
            tmp = data[j-1];
            data[j-1] = data[j];
            data[j] = tmp;
            // 入れ替え終わり
            j -= 1; // 1つ左のデータへ
        }
    }
}

int main(void) {
    /* 先頭 0 をダミー番兵としておく（添字 1 から 10 を使う） */
    int array[11] = {0, 2, 1, 8, 5, 4, 7, 9, 10, 6, 3};

    printf("Before sort: ");
    for (int i = 1; i <= 10; ++i) printf("%d ", array[i]);
    printf("\n");

    insertion_sort(array, 10);   /* 要素数 10（1〜10）をソート */

    printf("After  sort: ");
    for (int i = 1; i <= 10; ++i) printf("%d ", array[i]);
    printf("\n");
    return 0;
}
