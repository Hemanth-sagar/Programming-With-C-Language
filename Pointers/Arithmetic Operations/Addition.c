#include<stdio.h>
int main()
{
	int a[6]={1,2,3,4,-6,0};
	int *p = &a[0];
	int *q = &a[0];
	printf("value is: %d\n",*p);//1
	printf("address of element is: %u\n",p);//a[0] address
	p=p+2;
	*p = 34;//a[2] = 34
	printf("value is: %d\n",*p);//34
	printf("address of element is: %u");//address of a[2]
}
