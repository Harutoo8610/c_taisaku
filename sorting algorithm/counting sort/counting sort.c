#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void countingSort(int array[], int size, int max) {
    // カウンティング配列の初期化
    int count[max + 1];
    memset(count, 0, sizeof(count));

    // 各要素の出現回数をカウント
    for (int i = 0; i < size; i++) {
        count[array[i]]++;
    }

    // カウンティング配列を累積和に変換
    for (int i = 1; i <= max; i++) {
        count[i] += count[i - 1];
    }

    // ソート済み配列を格納する配列を確保
    int output[size];
    // ソート処理
    for (int i = size - 1; i >= 0; i--) {
        output[count[array[i]] - 1] = array[i];
        count[array[i]]--;
    }

    // 元の配列にソート結果をコピー
    for (int i = 0; i < size; i++) {
        array[i] = output[i];
    }
}

int main() {
    int array[] = {4, 2, 2, 8, 3, 3, 1};
    int size = sizeof(array) / sizeof(array[0]);
    int max = 8; // 配列の最大値

    printf("元の配列: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    countingSort(array, size, max);

    printf("ソート後の配列: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}