#include<stdio.h>
int main()
{
	int a = 3, b = 3;

	(a = 0) && (b = 5);//a��ֵΪ0��&&�����Ѿ�Ϊ�٣������b���и�ֵ
	printf("a=%d,b=%d\n", a, b);// bû��,a=0

	(a = 1) || (b = 5);//a��ֵΪ1��||�����Ѿ�Ϊ�棬�����b���и�ֵ
	printf("a=%d.b=%d", a, b);//bû�䣬a=1

	return 0;
}