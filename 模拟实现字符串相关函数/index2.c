#include <stdio.h>
int main()
{
    const int num = 10;
    int n = 30;
    //num = 15;  错误
    int* const p = &num;
    //const如果放在*的右边，修饰的是指针变量p，表示指针变量不能被改变
    *p = 20;
    //指针指向的内容，可以被改变
    // p = &n;
    return 0;
}