//matrix multiplication
#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,i,j;
    printf("enter the row and column of first matrix");
    scanf("%d %d",&r1,&c1);
    printf("enter the elements of first matrix:\n");
    for(i=0;i<r1;i++)
    {
    	for(j=0;j<c1;j++)
    	{
        printf("enter the %d %d value :",i,j);
        scanf("%d",&a[i][j]);
   		}	
    }
    printf("enter the row and column of second matrix");
    scanf("%d %d",&r2,&c2);
    printf("enter the elements of second matrix");
    for(i=0;i<r2;i++)
    {
    	for(j=0;j<c2;j++)
    	{
        printf("enter the %d %d value :",i,j);
        scanf("%d",&b[i][j]);
   		}	
    }
    /*for(i=0;i<r2;i++)
    {
    	for(j=0;j<c2;j++)
    	{
        c[i][j]=0;
   		}	
    }*/
    if(c1==r2)
    {
		for(i=0;i<r1;i++)
    	{
    		for(j=0;j<c1;j++)
    		{
    			c[i][j]=0;
    			for(int k=0;k<c2;k++)
    			{
    				c[i][j]+=a[i][k]*b[k][j];
				}
			}
			printf("\n");
		}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d \t",c[i][j]);
			}
			printf("\n");
		}
	}
	else
	printf("not possible");
}
