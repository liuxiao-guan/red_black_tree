/*************************************************************************
	> File Name: define.cpp
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 一  7/13 09:25:56 2020
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

#define PI 3.1415926
#define S(a, b) (a) * (b)
#define MAX(a, b) ({ \
    __typeof(a) __a = (a), __b = (b); \
    __a > __b ? __a : __b; \
})

#define TEST(func) { \
    printf("[%s : %d] : %s = %d\n", __FILE__, __LINE__, #func, func); \
}

int main() {
    printf("%.7lf\n", 2 * PI);
    printf("%d\n", S(13, 20));
    printf("%d\n", S(3 + 5, 4));
    TEST(MAX(3, 4));
    TEST(5 + MAX(3, 4));
    TEST(MAX(2, MAX(3, 4)));
    TEST(MAX(2, 3 > 4 ? 3 : 4));
    TEST(-5 > -3 > -1);
    TEST(2 > 3 > 4);
    int a = 6;
    TEST(a);
    TEST(MAX(a++, 3));
    TEST(a);
    return 0;
}
