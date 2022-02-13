#include <stdio.h>
//struct是结构体关键字，stu是类型名称
struct stu
{
    char name;
    int age;
    char id;
}s1;//s1是全局变量
struct node
{
    int data;
    struct stu p;
    struct node* next;
}n = {10,{4,5},NULL};//结构体嵌套初始化
int main()
{
    //创建对象
    struct stu s2 = {"zhangSan",20};//初始化
    return 0;
}
