#include <stdio.h>
/* get array from user
 * print that array
 */
void main ()
{
	char a[10], i;
	printf("\nEnter the 10 char ");
	for (i=0; i<10; i++) {	/* get char array from user */
		scanf("\n%c", &a[i]);
	}
	printf("\nYou enter ");
	for (i=0; i<10; i++) {	/* print array */
		printf("\n%c", a[i]);
	}
}
