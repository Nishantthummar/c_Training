#include<stdio.h>
int invert(int,int,int);
void main()
{
	int x,p,n;
	printf("enter the value binary");
	scanf("%d",&x);
	//x=binbin(x);
	printf("Enter the no. of bit");
	scanf("%d",&n);
	printf("Enter the position");
	scanf("%d",&p);
	int temp,count=0;
	temp=x;
	while(temp!=0)
	{
		temp=temp/10;
		printf("%d\n",temp);
		count++;
	}
	if(n>count)
	{
		printf("invalid no.!!!");
	}
	else
	{
		x=invert(x,p,n);
		printf("\nthis is ans.%d\n",x);
	}
}


int invert(int x,int p ,int n)
{
	int z,sum=0,i=0;
	z=x;
	for(i=0;i<=n;i++)
	{
		z=z/10;
	}
	printf("Z is =%d\n",z);
	while(z!=0)
	{
		int no,j,q;	
		no=z%10;
		z=z/10;  //togle z
		if(no==1)
		{
			no=0;
		}
		else
		{
			no=1;
		}
		printf("z=%d\n",z);
		i++;
		for(j=1;j<i;j++)
		{
			no=no*10;
		}
		sum=sum+no;
		printf("sum =%d\n",sum);
	}
return sum;
}
		
