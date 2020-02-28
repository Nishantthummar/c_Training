#include <stdio.h>
#include <string.h>
void squeeze();
void main()
{
	int i;
	char s1[10],s2[10]; /*< Two array */
	
	printf("\nEnter only 10 elements");
	printf("\nEnter the first string ");
	scanf("%s", &s1[0]);
	printf("\nEnter the second string ");
	scanf("%s", &s2[0]);	

	squeeze(s1,s2);
	printf("\nUpdated fisrt string  ");
	for (i=0; i< strlen(s1); i++) {
		printf("%c", s1[i]);
	}
}

/***************************************************************************//*
*Function for give output string delete the ch. which containt in secind string
*@param[in] p1[] first string 
*@param[in] p2[] second string
******************************************************************************/
void squeeze(char p1[], char p2[])
{
	int i,j,k;
	printf("\ninside p1 %s", p1);
	printf("\ninside p2 %s", p2);
	for (i=0; i<10; i++) {
		for (j=0; j<10; j++) {			
			if (p1[i] == p2[j]) { // check if character same or not 
				for( k=i; k<10; k++) {
					p1[k] = p1[k+1];
				}
				p1[k-1] = '\0';
			}
		}
	}
}



	

