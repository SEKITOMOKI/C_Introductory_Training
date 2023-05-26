#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	//输出Hello world!并把printf("Hello world!")的返回值赋值给a
	//printf函数的返回值是输出的字符的个数
	int a = printf("Hello world!");

	//输出printf("Hello world!")的返回值，因为有12个字符，所以输出12
	printf("\n%d", a);
	return 0;
}