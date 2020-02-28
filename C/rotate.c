#include<stdio.h>
int right(int,int);
int cou(int);
void main(){
	int x,n;
	printf("enter number = ");
	scanf("%d",&x);
	printf("Enter rotate bit = ");
	scanf("%d",&n);
	x=right(x,n);
	printf("\nafter rotate is = %d",x);
}
int right(int x,int n)
{
	int count=0,sum=0,temp,q=1,i=0,j=1,rem,div,mul,sum1=0,k;
	temp=x;
	count=cou(temp);
	temp=x;
	div=x;
	for(i=1;i<=n;i++)
	{
		rem=div%10;
		//printf("rem is%d",rem);
		mul=cou(div);
		mul=count-(mul-3)-(n-2);
		div=div/10;
		j=1;
		for(k=1;k<mul;k++)
		{
			j=j*10;
			printf("\ninside loop j is %d",j);
			
		}
		
		printf("\nj is %d\n",j);
		sum1=rem*j+sum1;
	}
	//div=div/10;	
	sum1=sum1+div;
	return sum1;
}

int cou(int x1)
{
	int count1=0;	
	while(x1!=0)
	{
		x1=x1/10;
		count1++;
	}
	return count1;
}
