#include <stdio.h>
void squeeze();
void main()
{
	//int i;
	char s1[10],s2[10]; /*< Two array */
	//p1 = &s1[0]; /*< pointer of first array */
	//p2 = &s2[0]; /*< pointer of second array */
	printf("enter the one");
	scanf("%s", &s1[0]);
	printf("\nsecond ");
	scanf("%s", &s2[0]);	
	squeeze(s1,s2);
	printf("\nnew s1 is ");
	printf(" %s", s1);
}
void squeeze(char p1[], char p2[])
{
	int i,j,k;
	printf("\ninside p1 %s", p1);
	printf("\ninside p2 %s", p2);
	for (i=0; i<10; i++) {
		for (j=0; j<10; j++) {
			if (p1[i] == p2[j]) {
				for( k=i; k<10; k++) {
					p1[k] = p1[k+1];
					//printf(" p1 %c", p1[i]);
				}
				p1[k-1] = '\0';
			}
		}
	}
}



	

