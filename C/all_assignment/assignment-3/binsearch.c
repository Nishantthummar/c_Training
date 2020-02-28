#include <stdio.h>
int binsearch();
void main()
{
	int a[1000], i,x,no;
	printf("\nEnter the no. of element =");
	scanf("%d", &no);
	printf("\nenter the %d elements (decimals) separated by enter = ",no);
	
	for (i=0; i<no; i++) {
		scanf("%d", &a[i]);
	}
	printf("\nEnter the value = ");
	scanf("%d", &x);
	
	x = binsearch(x, a, no);
	printf("value found at = %d", x);
}

/***************************************************************************//*
*Function for return position of number 
*@param[in] x   value which user wants to find
*@param[in] a[] string
*@param[out] no number of elemnt
******************************************************************************/
int binsearch(int x, int a[], int no)
{
	int i;
	for (i=0; i<no; i++) {
		if (a[i] > x || a[i]<x) {
			;
		} else {
			return i;
		}
	}
	return -1;
}









