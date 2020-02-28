#include<stdio.h>
int power(int , int);
void main()
{
	int a;
	float b;
	char c;
	short int d;
	long int e;
	double f;
	long double g;
	long int a1,b1,c1,d1,e1,f1,g1;
	a1 = sizeof(a);
	b1 = sizeof(b);
	c1 = sizeof(c);
	d1 = sizeof(d);
	e1 = sizeof(e);
	f1 = sizeof(f);
	g1 = sizeof(g);
	printf("size of int is %ld \nsize of float is %ld \nsize of char is %ld \n size of short int is %ld \n size of long int %ld \n size of double is %ld \nsize of long double is %ld \n", a1,b1,c1,d1,e1,f1,g1);

	int a2,b2,c2,d2,e2,f2,g2;
	a2= power(2,a1*8);
	b2= power(2,b1*8);
	c2= power(2,c1*8);
	d2= power(2,d1*8);
	e2= power(2,e1*8);	
	f2= power(2,f1*8);
	g2= power(2,g1*8);

}
int power(int x,int y)
{
	int i;
	long double temp=1;
	for(i=0;i<y;i++)
	{
		temp=temp*x;
	}
	printf("ans is %.0LF\n",temp);	
	return temp;
}
