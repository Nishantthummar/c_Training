#include <stdio.h>

int any();

int main()
{
	char a[10],b[10];
	int l;

	printf("\nenter the first string with 10 characters");
	scanf("%s", &a[0]);
	printf("\nEnter the the second string with 10 characters");
	scanf("%s", &b[0]);
	
	l= any(a,b);
	printf("\npositon is %d", l);
	
	return 0;
}

/***************************************************************************//*
*Function for return position of element where first ch. is same in two sring
*@param[in] s1[] first string 
*@param[in] s2[] second string
*@param[out] l   return position
******************************************************************************/
int any(char s1[], char s2[])
{
	int i,j;
	for (i=0; i<10; i++) {
		for (j=0; j<10; j++) {
			if (s1[i] == s2[j]) {
				return i; // return first only 
			}
		}
	}
	return -1;
}
