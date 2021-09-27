//Pointer Assignment
#include<stdio.h>
int main()
{
	int a=10,b=5;
	int *p,*q;//Should be type of a&b
	p = &a;
	q = &b;
	*q=*p;
	printf("a = %d %d %d\n",a,*p,*q,b);// 10 10 10 10
}
