#include <stdio.h>

/* 不调用库函数，自己实现求字符串长度 */
/* 参数 const char *s：const 表示函数内不修改字符串内容 */
/* 返回值 size_t：无符号整数，专门用来表示长度、大小 */
size_t my_strlen(const char *s) {
    size_t len = 0;

    /* 字符串在内存里是一串字符，最后跟一个 0 结尾 */
    /* 所以只要没遇到 0，就说明还没到末尾，计数器加一 */
    while (s[len] != 0) {
        len++;
    }

    return len;
}

int main(void) {
    const char *test = "hello";

    printf("字符串: %s\n", test);
    printf("my_strlen 结果: %d\n", (int)my_strlen(test));

    return 0;
}
