#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	//输出Hello world!并把printf函数的返回值赋值给了a
	//printf函数返回值是输出的字符个数，所以变量a存的是12
	int a = printf("Hello world!");

	printf("\n%d", a);

	return 0;
}