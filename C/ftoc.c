#include<stdio.h>
void main()
{
	float far,cel;
	int lower,upper,step;

	lower=0;
	upper=300;
	step=20;
	far=lower;

	while(far<=upper)
	{
		cel=(5*(far-32)/9);
		printf("far is %3.3f and cels is %.3f\n",far,cel);
		far=far+step;
	}
}
