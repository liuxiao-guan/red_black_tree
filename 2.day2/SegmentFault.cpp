/*************************************************************************
	> File Name: SegmentFault.cpp
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 二  7/14 09:22:29 2020
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

int main() {
    int a = 7;
    int b[5] = {0};
    int c = 8;
    b[a - 9] = 15;
    printf("%p %p %p %p\n", &a, &c, b, b + 5);
    printf("%d %d\n", a, c);
    return 0;
}
