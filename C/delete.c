#include<stdio.h>
void main()
{
	int a[100],i,n,p,value;
	printf("enter the no. of element =");
	scanf("%d",&n);
	printf("\nenter the %d element :",n);
	for(i=0;i<n;i++)
	{
		scanf("\n%d",&a[i]);
	}
	printf("enter the position :");
	scanf("%d",&p);
	/*printf("Enter the value");
	scanf("%d",&value);*/
	for(i=p+1;i<n;i++)
	{
		a[i-1]=a[i];
		//a[n-1]='0';
	}
	printf("\nafter deleting");
	for(i=0;i<n-1;i++)
	{
		printf(" %d",a[i]);
	}
}
