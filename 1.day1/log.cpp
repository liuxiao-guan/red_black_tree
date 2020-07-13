/*************************************************************************
	> File Name: log.cpp
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 一  7/13 10:28:23 2020
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

int add(int a, int b) {
    printf("PRETTY_FUNCTION : %s\n", __PRETTY_FUNCTION__);
    return a + b;
}

#ifdef DEBUG

#define log(frm, args...) { \
    printf("[%s : %d] ", __func__, __LINE__); \
    printf(frm, ##args); \
    printf("\n"); \
}

#else

#define log(frm, args...)

#endif

int main() {
    log("DATE : %s", __DATE__);
    log("TIME : %s", __TIME__);
    log("LINE : %d", __LINE__);
    log("FILE : %s", __FILE__);
    log("FUNC : %s", __func__);
    log("PRETTY_FUNCTION : %s", __PRETTY_FUNCTION__);
    int a = 6;
    printf("%d\n", add(a, 4));
    log("%d", a);
    log("hello world");
    return 0;
}
