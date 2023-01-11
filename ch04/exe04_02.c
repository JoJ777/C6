#include <stdio.h>
#include <string.h>
#define MAX 20

int main(void)
{
    char Name[MAX];
    int len_Name;   //姓名宽度

    printf("Enter your name: ");
    scanf("%s", Name);
    len_Name = strlen(Name);
    printf("a:\"%s\"\n", Name);         //打印名字，包括双引号
    printf("s:\"12345678901234567890\"\n"); //参考对照长度
    printf("b:\"%20s\"\n", Name);       //在宽度为20字段右端打印名字，包括双引号
    printf("c:\"%-20s\"\n", Name);      //在宽度为20字段左端打印名字，包括双引号
    printf("d:\"%*s\"", len_Name + 3, Name);  //在比姓名宽度宽3的字段中打印名字

    return 0;
}