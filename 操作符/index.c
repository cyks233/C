#include <stdio.h>
// int main()
// {
//     int a = 15;
//     //左移
//     int b = a << 1;
//     //右移
//     int c = a >> 1;
//     int a1 = -10;
//     int c1 = a1 >> 5;
//     printf("a=%d\n",a);
//     printf("a1=%d\n",a1);
//     printf("c1=%d\n",c1);
//     printf("b=%d\n",b);
//     printf ("c=%d\n",c);
//     return 0;
// }
int main()
{
    int a = 3;
    int b = 5;
    int c = a & b;
    int c2 = a | b;
    int c3 = a ^ b;
    printf("c=%d\n",c);
    printf("c2=%d\n",c2);
    printf("c3=%d\n",c3);
    return 0;
}