#include <stdio.h>

int main(void)
{
    printf("Here's one way to print a ");   //第一种：使用多个printf()语句
    printf("long string.\n");
    printf("Here's another way to print a \
long string.\n");                           //第二种：用反斜杠|和Enter或Return键组合来断行
    printf("Here's the newest way to print a "
            "long strig.\n");               //第三种：ANSI C引入的字符串连接

    return 0;
}