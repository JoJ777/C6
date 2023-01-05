#include <stdio.h>

int main(void)
{
    int ch;
    printf("Please enter a ASSCII vlaue int integer(0~127): ");
    scanf("%d", &ch);
    printf("ASCII %d is %c\n", ch, ch);

    return 0;
}