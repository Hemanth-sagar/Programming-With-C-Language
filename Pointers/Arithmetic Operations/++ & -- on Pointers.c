#include<stdio.h>
int main()
{
	int a[]={1,2,3,4};
	int *p;
	p = a;
	printf("%d %d\n",*p++,*p++);//associativity R-->L
	printf("%d %d\n",*++p,*++p);
	printf("%d\n",*p--);
	printf("%d\n",*--p);
	printf("%d",*p);
	printf("%d",--(*p));
}
