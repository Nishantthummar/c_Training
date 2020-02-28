#include <stdio.h>
int binsearch();
void main()
{
	int a[1000], i,x,no;
	printf("\nEnter the no. of element =");
	scanf("%d", &no);
//	int a[no];
	printf("\nenter the string of %d elements = ",no);
	for (i=0; i<no; i++) {
		scanf("%d", &a[i]);
	}
	printf("\nEnter the value = ");
	scanf("%d", &x);
	x = binsearch(x, a, no);
	printf("value found at = %d", x);
}

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









