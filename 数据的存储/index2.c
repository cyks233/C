#include <stdio.h>
int checkSys()
{
    int a = 0;
    char* p = (char*)&a;
    return *p;//���� 1 ��ʾС�ˣ����� 0 ��ʾ���
}
int main()
{
   int ret = checkSys();
   if (ret == 1)
   {
       printf("С��\n");
   } 
   else
   {
       printf("���\n");
   }
    return 0;
}