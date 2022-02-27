#include <stdio.h>
int checkSys()
{
    int a = 0;
    char* p = (char*)&a;
    return *p;//返回 1 表示小端，返回 0 表示大端
}
int main()
{
   int ret = checkSys();
   if (ret == 1)
   {
       printf("小端\n");
   } 
   else
   {
       printf("大端\n");
   }
    return 0;
}