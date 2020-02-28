#include <stdio.h>
int any();
void main()
{
	char a[10],b[10];
	int l;
	printf("\nenter the first string ");
	scanf("%s", &a[0]);
	printf("\nEnter the the second string ");
	scanf("%s", &b[0]);
	l= any(a,b);
	printf("\npositon is %d", l);
}
int any(char s1[], char s2[])
{
	int i,j;
	for (i=0; i<10; i++) {
		for (j=0; j<10; j++) {
			if (s1[i] == s2[j]) {
				return i; // return first only 
				printf ("\nch is %d", i); // print all the location
			}
		}
	}
	return -1;
}
