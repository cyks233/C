//给你一个大小size,生成一个元素从1 到 size的数组
#include <stdio.h>
int main()
{
	int size = 20;
	int arr[20] = { 0 };
	int i = 0;
	for (i = 0; i < size; i++)
	{
		arr[i] = i;
	}
	for (i=0;i<size;i++)
	{
	printf("%d ", arr[i]);
	}
	return 0;
}