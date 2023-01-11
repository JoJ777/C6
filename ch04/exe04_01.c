#include <stdio.h>
#define MAX 20

int main(void)
{
    char firstName[MAX];
    char lastName[MAX];

    printf("Enter your first name: ");
    scanf("%s", firstName);
    printf("Enter your last name: ");
    scanf("%s", lastName);
    printf("Hello, %s,%s", lastName, firstName);

    return 0;
}