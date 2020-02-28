#include<stdio.h>
void main()
{
	int a[10],i,j,temp;
	printf("enter the 10 value");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	printf("\nassending order is\n");
	for(i=0;i<10;i++)
	{
		printf(" %d",a[i]);
	}
}
