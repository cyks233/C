#include <stdio.h>
void reverse(char* left , char* right)
{
    while(left < right)
    {
        char temp = 0;
        temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }

}
int main()
{
    char arr[100] = { 0 };
    gets(arr);
    int len = strlen(arr);
    //1.整个句子逆序
    //逆序的字符串的起始位置和结束位置
    reverse(arr, arr+len-1);
    //2.每个单词逆序
    //把起始地址赋给start
    char* start = arr;
    while(*start)
    {
        char* end = start;
        //当end不等于空格和\0时，end++
        while(*end != ' ' && *end != '\0')
        {
           end++;
        }
        reverse(start, end-1);
        //判断句子是否结束，如果结束（\0），start就不用跳过
        if(*end == ' ')
        {
            //跳过空格
            start = end + 1;
        } else {
            start = end;
        }
    }
    printf("%s\n",arr);
    return 0;
}