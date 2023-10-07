#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int maxElement = 0; // 最大要素を初期化

    // 二次元配列の入力と最大要素の検索
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            int element = 0;
            scanf("%d", &element);
            // printf("%d ", element);

            // 現在の要素が最大要素より大きい場合、最大要素を更新
            if (element > maxElement) {
                maxElement = element;
            }
        }
    }

    // 最大要素を出力
    printf("%d\n", maxElement);

    return (0);
}
