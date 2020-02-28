#include <stdio.h>
void setbits();
void main()
{
	int a1[10], a2[10];
	int i, j, no, temp, p;
	printf("\nenter the string with 10 elemnets");
	for (i=0; i<10; i++) {
		scanf("%d", &a2[i]);
	}
	printf("\nYou enter");
	for (i=0; i<10; i++) {
		printf("\n%d", a2[i]);
	
	}
	printf("enter the no of bits");
	scanf("%d", &no);
	printf("enter the position");
	scanf("%d", &p);
	setbits(a1, p, no, a2);
	for (i=0; i<=10-(p+no); i++) {
		printf("\na[%d] is %d", i, a1[i]);
	}
}
void setbits(int s1[], int p, int n, int s2[])
{
	int i, k, j = 0;
	for (i=p; i<p+n; i++) {
		s1[j] = s2[i];
		j++;
	}
}

	
	




