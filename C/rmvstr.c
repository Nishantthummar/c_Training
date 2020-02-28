#include<stdio.h>
void main()
{
	char a[10],b[10];
	int i,j;
printf("enter 1st str\n");
	for(i=0;i<=9;i++)
	{
		scanf("%c",&a[i]);
	}
printf("enter 2nd str\n");
	for(i=0;i<=9;i++)
	{
		scanf("%c",&b[i]);
	}
	for(i=0;i<=9;i++)
	{
		for(j=0;j<=9;j++)
		{
			if(a[i]==b[j])
			{
				a[i]='\0';
			}
		}
	}
	printf("new string is");
	for(i=0;i<=9;i++)
	{
		printf("%c",a[i]);
	}
	printf("\n");
}
