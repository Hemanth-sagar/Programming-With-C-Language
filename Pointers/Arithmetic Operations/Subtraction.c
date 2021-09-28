#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int *p = a;
	int *q = &a[3];
	printf("q - p = %d \n",q-p);//3
	printf("p - q = %d \n",p-q);//-3
	printf("value = %d \n",*q);//value 4
	q = q - 2;
	printf("value = %d \n",*q);//value 2
	p = p + 2;
	printf("q - p = %d \n",q - p);//-1 
	q = q - 2;
	printf("value = %d",*q);//Any garbage value as
	                   // it points to out of array
}
