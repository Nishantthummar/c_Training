#include<stdio.h>
int strindex(char *b,char u);
void main()
{
	char a[10],t;
	char *p;
	p = &a;
	int p;
	printf("Enter the string");
	scanf("%s",a);
	printf("\nEnter the char");
	scanf("%c",&t);
	p = strindex(*p,t);
	printf("\nPosition of %c is %d",t,p);

}
int strindex(char *b, char u)
{ 
	int count=0;
	for(b=0;b<=9;b++)
	{
		if(b[i]==u)
		{
			return b;
		}
		else
		{
			count++;
		}
	if(count==10)
	{
		return -1;
	}
}
}

