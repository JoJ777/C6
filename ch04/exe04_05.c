#include <stdio.h>
#define BITS 8  //一个字节Byte有8个位bit

int main(void)
{
    float speed, size, time;

    printf("Please enter net speed(Mbit/s): ");
    scanf("%f", &speed);
    printf("Please enter file size(MByte): ");
    scanf("%f", &size);
    time = size * BITS / speed;
    printf("At %.2f megabits per second, a file of %.2f megabytes\n", speed, size);
    printf("downloads in %.2f seconds.\n", time);

    return 0;
}