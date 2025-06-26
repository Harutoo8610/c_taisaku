# include<stdio.h>

// 2分探索関数
int binarySearch(?,?,?,?) {
    
}

int main() {
    int arr[] = {2, 5, 7, 8, 11, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 12;

    int result = binarySearch(arr, 0, n - 1, target);

    if (result == -1) {
        printf("要素 %d は配列に存在しません。\n", target);
    } else {
        printf("要素 %d はインデックス %d に存在します。\n", target, result);
    }

    return 0;
}