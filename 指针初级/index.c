#include <stdio.h>
int* test()
{
    int a = 10;
    return &a;
}
int main()
{
    //调用test函数，在内存中开辟一块空间（a）存放10
    int* p = test();
    //解引用后放入20，但此时空间（a）已被释放，p就是野指针
    *p = 20;
    return 0;
}