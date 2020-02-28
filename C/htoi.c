#include<stdio.h>
#include<math.h>
int htoi(int );
int power(int , int);
void main()
{
	int hex,in;
	printf("Enter the hexa value =");
	scanf("%x",&hex);
	in=htoi(hex);
	printf("Integer is =%d",in);
}
int htoi(int x)
{
	int temp,ans=0,i=0;
	while(x!=0)
	{
		temp=x%16;
		//printf("%x\n",temp);
		ans=ans+(power(16,i))*temp;
		i++;
		x=x/16;
		
	}
return ans;
}
int power(int x,int y)
{
	int i,temp1=1;
	for(i=0;i<y;i++)
	{
		temp1=temp1*x;
	}
	return temp1;
}
