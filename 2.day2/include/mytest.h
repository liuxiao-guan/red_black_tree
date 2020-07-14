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

#define TEST(a, b) \
void a##_##b(); \
__attribute__((constructor)) \
void add_##a##_##b() { \
    add_func(a##_##b, #a "." #b); \
} \
void a##_##b()

struct Func_Data {
    void (*func)();
    const char *func_name;
} func_arr[100];
int func_cnt;

void add_func(void (*func)(), const char *func_name) {
    func_arr[func_cnt].func = func;
    func_arr[func_cnt].func_name = func_name;
    func_cnt += 1;
    return ;
}

int RUN_ALL_TESTS() {
    for (int i = 0; i < func_cnt; i++) {
        printf("run %s\n", func_arr[i].func_name);
        func_arr[i].func();
        printf("ok\n");
    }
    return 0;
}

#endif
