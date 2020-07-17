/*************************************************************************
	> File Name: main.cpp
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 五  7/17 09:30:47 2020
 ************************************************************************/


#include <quick_sort.h>
#include <test.h>

#define MAX_N 10000000

int main() {
    int *arr = getData(MAX_N);
    TEST(quick_sort_v1, arr, 0, MAX_N - 1);
    TEST(quick_sort_v2, arr, 0, MAX_N - 1);
    TEST(quick_sort_v3, arr, 0, MAX_N - 1);
    return 0;
}
