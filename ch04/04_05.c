#include <stdio.h>
#include <limits.h> /* 提供了与整数类型大小限制相关的头文件 */
#include <float.h>  /* 提供了与浮点数类型大小限制相关的头文件 */

int main(void)
{
    printf("Some number limits for this system:\n");
    printf("Biggest int: %d --- Smallest int: %d\n", INT_MAX, INT_MIN); //int类型的最大值和最小值
    printf("Biggest long long: %lld --- Smallest long long: %lld", LLONG_MAX, LLONG_MIN);   //long long类型的最大值和最小值
    printf("One byte = %d bits on this system.\n", CHAR_BIT);   //char类型的位数
    printf("Biggest double: %e == Smallest double = %e\n", DBL_MAX, DBL_MIN);   //double类型的最大正数和最小正数
    printf("Biggest float: %e == Smallest float = %e\n", FLT_MAX, FLT_MIN); //float类型的最大正数和最小正数
    printf("Double precision = %d digits, Float precision = %d digits\n", DBL_DIG, FLT_DIG);    //double类型和float类型的最少有效数字位数（十进制）
    printf("Double mant: %d -- Float mant: %d\n", DBL_MANT_DIG, FLT_MANT_DIG);  //double类型和float类型的尾数位数
    printf("Double min 10 exp = %d --- Float min 10 exp = %d\n",            DBL_MIN_10_EXP, FLT_MIN_10_EXP);    //分别带全部有效数字的double类型和float类型的最小负指数（以10为底）
    printf("float epsilon = %e\n", FLT_EPSILON);    //1.00和比1.00大的最小float类型值之间的差值
    return 0;
}