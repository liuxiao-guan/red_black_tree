#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define TEST(func, a, l, r) { \
    printf("\033[1;33m%s\033[0m : ", #func); \
    int *temp = (int *)malloc(sizeof(int) * (r - l + 1)); \
    memcpy(temp, a, sizeof(int) * (r - l + 1)); \
    int b = clock(); \
    func(temp, l, r); \
    int e = clock(); \
    if (check(temp, l, r)) { \
        printf(" \033[1;32mOK, %.2lf ms\033[0m\n", 1000.0 * (e - b) / CLOCKS_PER_SEC); \
    } else { \
        printf(" \033[1;35mFAILED\033[0m\n"); \
    } \
    free(temp); \
}

int *getData(int n) {
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % n;
    }
    return arr;
}

int check(int *arr, int l, int r) {
    for (int i = l + 1; i <= r; i++) {
        if (arr[i] < arr[i - 1]) return 0;
    }
    return 1;
}

__attribute__((constructor))
static void init_srand() {
    srand(time(0));
    return ;
}
