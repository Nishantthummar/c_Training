#include<stdio.h>
int i;
long int itob(int,int);
void main()
{
	long int n,s,b;
	printf("\nenter the integer no = ");
	scanf("%ld",&n);
	printf("\nEnter the base = ");
	scanf("%ld",&b);
	s=itob(n,b);
	printf("\nValue in base %ld is %ld",b,s);

}
long int itob(int n,int b)
{
	long int rem=0,sum=0,count=0;
	while(n!=0)
	{
		rem=n%b;
		n=n/b;
		count++;
		for(i=0;i<count-1;i++)
		{
			rem =10*rem;
		}
		sum=sum+rem;
	}
	return sum;
}
