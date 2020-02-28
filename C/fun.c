#include<stdio.h>
int power(int , int);
void main()
{
	int base,pwr,ans;
	printf("enter the base =");
	scanf("%d",&base);
	printf("enter the pwr =");
	scanf("%d",&pwr);
	ans=power(base,pwr);
	printf("Answer is %d\n",ans);
}
int power(int x,int y)
{
	int i,temp=1;
	for(i=0;i<y;i++)
	{
		temp=temp*x;
	}
	return temp;
}
