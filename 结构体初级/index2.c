#include <stdio.h>
struct b
{
    char c;
    short b;
    double d;
};
struct stu2
{
    struct b sa;
    char name[10];
    int age;
    char id[20];
};
void print1(struct stu2 sta)
{
    printf("%c %d %lf %s %d %s\n",sta.sa.c,sta.sa.b,sta.sa.d,sta.name,sta.age,sta.id);
}
void print2(struct stu2* stb)
{
    printf("%c %d %lf %s %d %s\n",stb->sa.c,stb->sa.b,stb->sa.d,stb->name,stb->age,stb->id);
}
int main()
{
    struct stu2 s = {{'w',18,3.14},"zhangSan",20,"0017"};
    print1(s);//传值调用
    print2(&s);//传址调用
    return 0;
}