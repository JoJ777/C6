#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    int biggest_int = 2147483647;
    float biggest_flt = 3.4E+38;
    float small_flt = 3.4E-38;

    printf("INT_MAX = %d, INT_MAX + 1 = %d\n", biggest_int, biggest_int + 1);
    printf("FLT_MAX = %e, FLT_MAX * 100.0f = %e\n", biggest_flt, biggest_flt * 100.0f);
    printf("FLT_MIN = %e, FLT_MAX / (100.0E100) = %e\n", small_flt, small_flt / (100.0E100));
    return 0;
}