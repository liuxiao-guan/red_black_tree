#include "add.h"
#include <stdio.h>

int is_prime(int x) {
    printf("%s : %d\n", __func__, add(3, 4));
    if (x <= 1) return 0;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}
