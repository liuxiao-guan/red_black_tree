/*************************************************************************
	> File Name: mytest.h
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 二  7/14 10:34:14 2020
 ************************************************************************/

#ifndef _MYTEST_H
#define _MYTEST_H

#define EXPECT(a, comp, b) { \
    if (!((a) comp (b))) { \
        printf("error\n"); \
    } \
}

#define EXPECT_EQ(a, b) EXPECT(a, ==, b)
#define EXPECT_NE(a, b) EXPECT(a, !=, b)
#define EXPECT_GT(a, b) EXPECT(a, >, b)
#define EXPECT_LT(a, b) EXPECT(a, <, b)
#define EXPECT_GE(a, b) EXPECT(a, >=, b)
#define EXPECT_LE(a, b) EXPECT(a, <=, b)

#define TEST(a, b) void a##_##b()

int RUN_ALL_TESTS() {
    // to do something
    // run all test case
    return 0;
}

#endif
