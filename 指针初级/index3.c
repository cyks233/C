#include <stdio.h>
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    //arr是数组名
    int* p = arr;
    printf("%d\n",arr[2]);
    printf("%d\n",p[2]);//p[2] --> *(p+2)

    //arr[2] --> *(arr+2) -->*(2+arr) --> 2[arr]
    //编译器会把arr[2]变成*(arr+2)，*(arr+2)与*(2+arr)相等，所以arr[2]也可以写成 2[arr]
    //arr[2] --> *(arr+2) 数组的首地址加2，得到数组的第三个元素的地址
    printf("%d\n",2[arr]);
    printf("%d\n",arr[2]);

    //arr[2] == *(arr+2) == *(p+2) == *(2+p) == *(2+arr) == 2[arr]
    return 0;
}