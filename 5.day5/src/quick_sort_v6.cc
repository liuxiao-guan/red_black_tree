#include <stdlib.h>

static inline int three_point(int *arr, int l, int r) {
    int a = arr[l], b = arr[r], c = arr[(l + r) >> 1];
    if (a > b) a ^= b, b ^= a, a ^= b;
    if (b > c) c ^= b, b ^= c, c ^= b;
    if (a > b) a ^= b, b ^= a, a ^= b;
    return b;
}

static void unguarded_insert_sort(int *arr, int l, int r) {
    int ind = l;
    for (int i = l + 1; i <= r; i++) {
        if (arr[i] < arr[ind]) ind = i;
    }
    while (ind > l) {
        arr[ind] ^= arr[ind - 1];
        arr[ind - 1] ^= arr[ind];
        arr[ind] ^= arr[ind - 1];
        ind -= 1;
    }
    for (int i = l + 2; i <= r; i++) {
        int j = i;
        while (arr[j] < arr[j - 1]) {
            arr[j] ^= arr[j - 1];
            arr[j - 1] ^= arr[j];
            arr[j] ^= arr[j - 1];
            j -= 1;
        }
    }
    return ;
}

void quick_sort_v6(int *arr, int l, int r) {
    while (r - l >= 16) {
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
        quick_sort_v6(arr, l, y);
        l = x;
    }
    if (l < r) unguarded_insert_sort(arr, l, r);
    return ;
}
