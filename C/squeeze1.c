#include<stdio.h>
char* squeeze(char a1[10],char a2[10]);
char i,j,k;
char count=10;
void main()
{
	char s1[10],s2[10],*p1,*q1,*q2;
	q1=&s1[0];
	q2=&s2[0];
	printf("\nEnter the s1 ");
	for(i=0;i<10;i++)
	{
		scanf("%c",&s1[i]);
	}
	printf("\nEnter the s2");
	for(i=0;i<10;i++)
	{
		scanf("%c",&s2[i]);
	}
	
	p1 = squeeze(s1,s2);
	printf("\nAns is ");	
	for(i=0;i<10-count;i++)
	{
		printf("\n%c",*p1);
		p1+=2;
	}
}
char* squeeze(char a1[10],char a2[10])
{
	char *p;
	p=&a1[0];	
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a1[i]==a2[j])
			{
				for(k=i;k<10-i;k++)
				{
				a1[i]=a1[i+1];
				//count--;
				//printf("count =%c",a1[i]);
				}
				count--;
			}
		}
	}
	return p;
}
