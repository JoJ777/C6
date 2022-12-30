#include <stdio.h>

int main(void)
{
    double y;
    printf("请输入英寸值：\n");
    scanf("%lf", &y);
    printf("转换成厘米后：%.3lf\n", y*2.54);

    return 0;
}