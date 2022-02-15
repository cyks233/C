#include <stdio.h>
myStrcpy(char* dest, char* str)
{
    //第一次循环str是h，为真，循环继续，*dest++ = *str++的结果是h
    //最后一次循环str的值为\0，为假，循环结束
    while (*dest++ = *str++)
    {
        ;
    }
}
int main()
{
    char arr1[20] = "xxxxxxxxxx";
    char arr2[] = "hello";
    myStrcpy(arr1, arr2);//1.目标空间的起始地址 2.原空间的起始地址
    printf("%s\n", arr1);
    return 0;
}