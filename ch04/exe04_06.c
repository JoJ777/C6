#include <stdio.h>
#include <string.h>
#define LEN 20

int main(void)
{
    char first_name[LEN];
    char last_name[LEN];
    int first_len;
    int last_len;

    printf("Please enter your firstname:\n");
    scanf("%19s", first_name);
    printf("Please enter your lastname:\n");
    scanf("%19s", last_name);
    first_len = strlen(first_name);
    last_len = strlen(last_name);
    printf("%s %s\n", first_name, last_name);   //右对齐
    printf("%*d %*d\n", first_len, first_len, last_len, last_len);
    printf("%s %s\n", first_name, last_name);   //左对齐
    printf("%-*d %-*d\n", first_len, first_len, last_len, last_len);

    return 0;
}