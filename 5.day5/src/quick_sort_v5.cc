#include <stdlib.h>

static inline int three_point(int *arr, int l, int r) {
    int a = arr[l], b = arr[r], c = arr[(l + r) >> 1];
    if (a > b) a ^= b, b ^= a, a ^= b;
    if (b > c) c ^= b, b ^= c, c ^= b;
    if (a > b) a ^= b, b ^= a, a ^= b;
    return b;
}

void quick_sort_v5(int *arr, int l, int r) {
    while (l < r) {
        int x = l, y = r, z = three_point(arr, l, r), temp;
        do {
            while (arr[x] < z) x++;
            while (arr[y] > z) y--;
            if (x <= y) {
                temp = arr[x];
                arr[x] = arr[y];
                arr[y] = temp;
                x++, y--;
            }
        } while (x <= y);
        quick_sort_v5(arr, l, y);
        l = x;
    }
    return ;
}
