/*************************************************************************
	> File Name: main.cpp
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 五  7/17 09:30:47 2020
 ************************************************************************/


#include <quick_sort.h>
#include <test.h>

void test1() {
#define MAX_N 10000000
    printf("\n\033[1;32m[========]\033[0m quick sort random data test : %d\n", MAX_N);
    int *arr = getData(MAX_N);
    TEST(quick_sort_v1, arr, 0, MAX_N - 1, "normal");
    TEST(quick_sort_v2, arr, 0, MAX_N - 1, "signle side recursive");
    TEST(quick_sort_v3, arr, 0, MAX_N - 1, "unguarded partition");
    TEST(quick_sort_v4, arr, 0, MAX_N - 1, "random radix value select");
    TEST(quick_sort_v5, arr, 0, MAX_N - 1, "three point radix value select");
    TEST(quick_sort_v6, arr, 0, MAX_N - 1, "r - l < 16, insert sort");
#undef MAX_N
    return ;
}

void test2() {
#define MAX_N 50000
    printf("\n\033[1;32m[========]\033[0m quick sort sorted data test : %d\n", MAX_N);
    int *arr = getSortedData(MAX_N);
    TEST(quick_sort_v1, arr, 0, MAX_N - 1, "normal");
    TEST(quick_sort_v2, arr, 0, MAX_N - 1, "signle side recursive");
    TEST(quick_sort_v3, arr, 0, MAX_N - 1, "unguarded partition");
    TEST(quick_sort_v4, arr, 0, MAX_N - 1, "random radix value select");
    TEST(quick_sort_v5, arr, 0, MAX_N - 1, "three point radix value select");
    TEST(quick_sort_v6, arr, 0, MAX_N - 1, "r - l < 16, insert sort");
#undef MAX_N
    return ;
}

int main() {
    test1();
    test2();
    return 0;
}
