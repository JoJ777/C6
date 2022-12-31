#include <stdio.h>
void butler(void);  //函数原型声明
int main(void)
{
    printf("I will summon the butler functioni.\n");
    butler();
    printf("Yes. Bring me some tea and writeable DVDs.\n");

    return 0;
}

void butler(void)   //函数定义开始
{
    printf("You rang, sir?\n");
}