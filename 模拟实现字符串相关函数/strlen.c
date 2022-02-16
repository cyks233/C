#include <stdio.h>
#include <assert.h>
//size_t - unsigned int
size_t myStrlen(const char* str)
{
    assert(str != NULL);
    size_t count = 0;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}
int main()
{
    char arr2[] = "hello world";
    // printf("%d\n",strlen(str1));
    printf("%d\n", myStrlen(arr2));
    return 0;
}