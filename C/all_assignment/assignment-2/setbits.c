#include <stdio.h>

void setbits();

int main()
{
	int a1[10], a2[10]; //!< To store input and output
	int i, j, temp; //!< variable for looping and temp.
	int no ,p; //!< variable number of bits & position.
	
	// get string from user
	printf("\nEnter the 10 numbers separated by enter ");
	for (i=0; i<10; i++) {
		scanf("%d", &a2[i]);
	}
	
	//print string which user enterd
	printf("\nYou enter ");
	for (i=0; i<10; i++) {
		printf("\n%d", a2[i]);
	
	}
	
	printf("\nEnter the no of bits ");
	scanf("%d", &no);
	
	printf("\nEnter the position");
	scanf("%d", &p);
	if ( no<=10 && p<=10) {	
		setbits(a1, p, no, a2);  //!< function call
	
		for (i=0; i<=10-(p+no); i++) {
			printf("\nrequired bit is %d", a1[i]);
		}
	} else {
		printf("\n Enter valid position and bits ");
	}

	return 0;
}

/***************************************************************************//*
*Function for give string in ouput when we give input string, postion & no. of
*bit which  we want to copy into output string
*@param[in] s1[] output string
*@param[in] p    position from where string copy
*@para,[in] n    number of bit copy from input string
*@param[in] s2[] input string
*@param[out] l   return position
******************************************************************************/
void setbits(int s1[], int p, int n, int s2[])
{
	int i, k, j = 0;
	for (i=p; i<p+n; i++) {
		s1[j] = s2[i];
		j++;
	}
}

	
	




