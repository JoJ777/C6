#include <stdio.h>
#include <string.h>     //提供strlen()函数的原型
#define DENSITY 62.4    //人体密度(单位：磅/立方英尺)
int main(void)
{
    float weight, volume;
    int size, letters;  //name是一个可容纳40个字符的数组
    char name[40];

    printf("Hi! What's your firsts name?\n");
    scanf("%s", name);
    printf("%s, What's your weight in pounds?\n", name);
    scanf("%f", &weight);
    size = sizeof(name);    //sizeof()获得数组的存储的字节数
    letters = strlen(name); //strlen()获取数组中存的字符串的长度，如Christine占9个长度
    volume = weight / DENSITY;
    printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
    printf("Also, your first name has %d letters,\n", letters);
    printf("and we have %d bytes to store it.\n", size);

    return 0;
}