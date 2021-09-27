#include<stdio.h>
int main()
{
	int a=10,b=9,c;
	int *p,*q,*r;
	p = &a;	//p = (&a,&b) then *p = 9
	r = &a;
	q = &b;
	c = *p;
	printf("value of a = %d \n",a);//10
	printf("value of a = %d \n",*p);//10
	printf("value of a = %d \n",*r);//10
	printf("address of a:%d \n",&a);//address(a)
	printf("address of a:%d \n",p);//address(a)
	printf("address of p:%d \n",&p);//address(p)
	printf("c = %d \n",c);//10
}
