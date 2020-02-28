#include<stdio.h>
void main()
{
	int i,j,temp,n=10;
	int a[10];
	printf("\nenter the 10 value");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				a[j]=a[j+1];
				n--;
			}
		}
	}
	printf("\nnew string is \n");
	for(i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}

	
}

