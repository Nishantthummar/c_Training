#include <stdio.h>
#include <string.h>
int strend();
void main() 
{
	char s[10], t[10];
	char i;
	int  sta;
	printf("\nEnter the first str ");
	for (i=0; i<10; i++) {
		scanf("%c", &s[i]);
	}
	printf("\nEnter the second str ");
	for (i=0; i<10; i++) {
		scanf("%c", &t[i]);
	}
	sta = strend(s,t);
	printf("\nStatus is %d", sta);

}
/**************************************************************************//**
*Function about to check if string is present at the end of first string
*return 1 if present else -1
******************************************************************************/
int strend(char s1[], char t1[])
{
	 int i=0,j=0,no;
	no = strlen(s1);
	while (no != 0) {
		if ((s1[no] == t1[j])&& (s1[no-1] == t1[j+1])) {
			no--;
			j++;
		}
		else {
			no--;
		}
	}
	if (j > 1) {
		return 1;
	} else {
		return -1;
	}

}
