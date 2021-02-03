#include<stdio.h>
int main()
{
	int a = 3, b = 3;

	(a = 0) && (b = 5);//a赋值为0，&&运算已经为假，不会对b进行赋值
	printf("a=%d,b=%d\n", a, b);// b没变,a=0

	(a = 1) || (b = 5);//a赋值为1，||运算已经为真，不会对b进行赋值
	printf("a=%d.b=%d", a, b);//b没变，a=1

	return 0;
}