#include <stdlib.h>

void quick_sort_v4(int *arr, int l, int r) {
    while (l < r) {
        int x = l, y = r, z = arr[l + (rand() % (r - l + 1))], temp;
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
        quick_sort_v4(arr, l, y);
        l = x;
    }
    return ;
}
