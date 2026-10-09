#include <stdio.h>

int main(void) {
    int a = 3, b = 5;

    printf("交换前: a=%d, b=%d\n", a, b);

    /* 用中间变量交换 */
    int tmp = a;
    a = b;
    b = tmp;

    printf("交换后: a=%d, b=%d\n", a, b);

    return 0;
}
