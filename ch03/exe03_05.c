#include <stdio.h>
#define SEC_PER_YEAR 3.156e7

int main(void)
{
    double age;
    double seconds;
    
    printf("Enter your age: ");
    scanf("%lf", &age); //double类型的变量在输入时用%lf 而不是 %f
    seconds = age * SEC_PER_YEAR;
    printf("%.f year old includes %e seconds.\n", age, seconds);

    return 0;
}