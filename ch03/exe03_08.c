#include <stdio.h>
#define CUP_PER_PINT 2          //1品脱==2杯
#define OUNCE_PER_CUP 8         //1杯==8盎司
#define BIGSPOON_PER_OUNCE 2    //1盎司==2大汤勺
#define TEASPOON_PER_BIGSPOON 3 //1大汤勺==3茶勺

int main(void)
{
    double pint, ounce, cup, bigspoon, teaspoon;
    printf("Enter a number of cups: ");
    scanf("%lf", &cup);
    pint = cup / CUP_PER_PINT;
    ounce = cup * OUNCE_PER_CUP;
    bigspoon = ounce * BIGSPOON_PER_OUNCE;
    teaspoon = bigspoon * TEASPOON_PER_BIGSPOON;
    printf("Here are some ways to show %g cups.\n", cup);
    printf("Pint: %g\n", pint);
    printf("Ounce: %g\n", ounce);
    printf("Bigspoon: %g\n", bigspoon);
    printf("Teaspoon: %g\n", teaspoon);

    return 0;
}