/*************************************************************************
	> File Name: testcase1.h
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 二  7/14 11:54:31 2020
 ************************************************************************/

#ifndef _TESTCASE1_H
#define _TESTCASE1_H

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

#endif
