#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	//���Hello world!����printf("Hello world!")�ķ���ֵ��ֵ��a
	//printf�����ķ���ֵ��������ַ��ĸ���
	int a = printf("Hello world!");

	//���printf("Hello world!")�ķ���ֵ����Ϊ��12���ַ����������12
	printf("\n%d", a);
	return 0;
}