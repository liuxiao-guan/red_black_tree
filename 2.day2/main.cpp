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
#include <mytest.h>
using namespace std;

int add(int a, int b) {
    return a + b;
}

TEST(test, add1) {
    EXPECT_EQ(add(3, 4), 7);
    EXPECT_NE(add(3, 4), 8);
    EXPECT_GT(add(3, 4), 7);
    EXPECT_LT(add(3, 4), 8);
    EXPECT_GE(add(3, 4), 7);
    EXPECT_LE(add(3, 4), 7);
}

TEST(test, add2) {
    EXPECT_EQ(add(3, 4), 7);
    EXPECT_NE(add(3, 4), 8);
    EXPECT_GT(add(3, 4), 6);
    EXPECT_LT(add(3, 4), 8);
    EXPECT_GE(add(3, 4), 7);
    EXPECT_LE(add(3, 4), 7);
}

int main(int argc, char *argv[]) {
    return RUN_ALL_TESTS();
}
