/*************************************************************************
	> File Name: test.cpp
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 二  7/14 10:06:52 2020
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
#include <add.h>
using namespace std;

#ifdef DEBUG
    #include <testcase.h>
#endif

int main(int argc, char *argv[]) {
    printf("hello world : %d\n", add(3, 4));
    #ifdef DEBUG
        return RUN_ALL_TESTS();
    #else
        return 0;
    #endif
}
