#include<stdio.h>
void main()
{
	int i,a=0,n,b=1,sum;
	printf("enter the limit =");
	scanf("%d",&n);
	printf("%d %d",a,b);
	for(i=0;i<n-2;i++)
	{
		sum=a+b;
		a=b;
		b=sum;
		printf(" %d",b);
	}
}
