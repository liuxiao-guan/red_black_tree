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
        test_func_flag = 1; \
        expect_printf(__FILE__, __LINE__, "(" #a ") " #comp " (" #b ")"); \
    } \
}

#define EXPECT_EQ(a, b) EXPECT(a, ==, b)
#define EXPECT_NE(a, b) EXPECT(a, !=, b)
#define EXPECT_GT(a, b) EXPECT(a, >, b)
#define EXPECT_LT(a, b) EXPECT(a, <, b)
#define EXPECT_GE(a, b) EXPECT(a, >=, b)
#define EXPECT_LE(a, b) EXPECT(a, <=, b)

#define COLOR(str, code) "\033[1;" #code "m" str "\033[0m"
#define GREEN(str) COLOR(str, 32)
#define YELLOW(str) COLOR(str, 33)
#define BLUE(str) COLOR(str, 34)
#define RED(str) COLOR(str, 35)

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

void expect_printf(const char *file, int line_no, const char *msg) {
    printf(YELLOW("  %s:%d: Failure\n"), file, line_no);
    printf(YELLOW("    Expected: %s\n"), msg);
    return ;
}

int test_func_flag;

int RUN_ALL_TESTS() {
    printf(GREEN("[==========]") " Running %d tests\n", func_cnt);
    for (int i = 0; i < func_cnt; i++) {
        printf(GREEN("[  RUN     ]") " %s\n", func_arr[i].func_name);
        test_func_flag = 0;
        int b = clock();
        func_arr[i].func();
        int e = clock();
        if (test_func_flag) {
            printf(RED("[  FAILED ]"));
        } else {
            printf(GREEN("[      OK  ]"));
        }
        printf(" %s (%d ms)\n", func_arr[i].func_name, 1000 * (e - b) / CLOCKS_PER_SEC);
    }
    return 0;
}

#endif
