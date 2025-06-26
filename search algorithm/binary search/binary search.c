# include<stdio.h>

// 2分探索関数
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;  // ミッドポイント計算 (オーバーフロー回避)

        if (arr[mid] == target) {
            return mid; // targetを見つけたら、そのインデックスを返す
        }

        if (arr[mid] < target) {
            left = mid + 1; // 探索範囲を右半分に絞る
        } else {
            right = mid - 1; // 探索範囲を左半分に絞る
        }
    }
    return -1; // targetが見つからなかった場合
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