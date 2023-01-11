#include <stdio.h>
#define GALLON_TO_LITRE 3.785f  //加仑到升的转换系数
#define MILE_TO_KM 1.609f       //英里到千米的转换系数
int main(void)
{
    float distance, gas;

    printf("Input the distance you travelled(in miles): ");
    scanf("%f", &distance);
    printf("Input the gas you spend(in gallon): ");
    scanf("%f", &gas);

    printf("Fuel cosumptions:\n");
    printf("USA: you gas wear is %.1f mile/gallon\n", distance / gas);  //美国方案（值越大越好）
    printf("Europe: your gas wear is %.1f liter/100km\n", gas * GALLON_TO_LITRE / (distance * MILE_TO_KM));     //欧洲方案（值越低越好）

    return 0;
}