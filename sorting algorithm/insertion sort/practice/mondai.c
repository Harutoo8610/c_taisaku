#include <stdio.h>

void insertion_sort(?,?) {
    
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
