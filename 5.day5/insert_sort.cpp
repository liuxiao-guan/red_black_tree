/*************************************************************************
	> File Name: insert_sort.cpp
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 五  7/17 10:34:16 2020
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <queue>
#include <stack>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <vector>
using namespace std;

#include <test.h>

void insert_sort(int *arr, int l, int r) {
    for (int i = l + 1; i <= r; i++) {
        int j = i;
        while (j > l && arr[j] < arr[j - 1]) {
            arr[j] ^= arr[j - 1];
            arr[j - 1] ^= arr[j];
            arr[j] ^= arr[j - 1];
            j -= 1;
        }
    }
    return ;
}

void unguarded_insert_sort(int *arr, int l, int r) {
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

int main() {
    #define MAX_N 10000
    int *arr = getData(MAX_N);
    TEST(insert_sort, arr, 0, MAX_N - 1);
    TEST(unguarded_insert_sort, arr, 0, MAX_N - 1);
    return 0;
}
