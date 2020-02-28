#include<stdio.h>
void main()
{
	int a=5,b;
	b= a++;
	printf("a is %d\n",a);
	printf("b is %d\n",b);
	b=++a;
	printf("b is %d\n",b);
	printf("a is %d\n",a);
}

