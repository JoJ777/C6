#include <stdio.h>

int main(void)
{
    float height;
    char name[20];

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your height in inch: ");
    scanf("%f", &height);
    printf("%s, you are %0.3f feet tall\n", name, height);

    return 0;
}