#include <stdio.h>
int main()
{
    float arr[5] = {1.20,80.40,9.92,7.80,4.30};
    float max = arr[0];
    int length = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    for (i=1;i<length;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("%f\n",max);
    return 0;
}