#include <stdio.h>
#include <assert.h>
//加const修饰变量，这个变量就称为常变量，不能被修改，但本质上还是变量
char* myStrcpy(char* dest, const char* str)
{
    assert(str != NULL && dest != NULL);//断言
    char* ret = dest;
    //第一次循环str是h，为真，循环继续，*dest++ = *str++的结果是h
    //最后一次循环str的值为\0，为假，循环结束
    while(*dest++ = *str++)
    {
        ;//hello的拷贝
    }
    return ret;//返回目标空间的原始地址
}
int main()
{
    char arr1[20] = "xxxxxxxxxx";
    char arr2[] = "hello";
    //1.目标空间的起始地址 2.原空间的起始地址
    printf("%s\n",myStrcpy(arr1, arr2));//链式访问
    return 0;
}