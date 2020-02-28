#include<stdio.h>
void main()
{
	float far,cel;
	int lower,upper,step;

	lower=0;
	upper=300;
	step=20;
	cel=lower;

	while(cel<=upper)
	{
		far= (9*(-40)/5)+32;
		printf("far is %3.3f and cels is %3.3f\n",far,cel);
		cel=cel+step;
	}
}
