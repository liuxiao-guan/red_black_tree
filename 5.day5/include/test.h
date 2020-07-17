/*************************************************************************
	> File Name: test.h
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 五  7/17 10:29:19 2020
 ************************************************************************/

#ifndef _TEST_H
#define _TEST_H

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

int *getData(int); 
int check(int *, int, int);

#endif
