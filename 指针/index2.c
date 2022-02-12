#include <stdio.h>
//定义一个myStrlen的函数，这个函数应该返回整数，用int；再定义一个字符型指针变量str
int myStrlen(char* str)
{
    //定义一个字符型指针变量start，把指针str赋值给指针start，字符串的地址传入start
    char* start = str;
    //解引用后str不等于\0的时候，str++
    while (*str != '\0')
    {
        //当*str==\0的时候，str指向的是\0的地址
        str++;
    }
    //用\0的地址减去字符串首元素的地址，得出字符串的长度，并返回。
    return str - start;
}
int main()
{
    int len = myStrlen("abcde");
    printf("%d\n", len);
    return 0;
}
