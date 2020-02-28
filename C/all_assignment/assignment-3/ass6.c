#include <stdio.h>
#include <string.h>
#define MACLINE 1000
#define abs(x) ((x)>0? (x): -(x))
void itoa(int n, char s[], int wi);
void reverse (char s[]);
void main()
{
	int number, w;
	char str[1000];
	//number = -2147483648;
	printf("\nEnter the no. ");
	scanf("%d", &number);
	printf("\nEnetr the width ");
	scanf("%d", &w);
	printf("Integer printed as ");
	
	itoa(number, str, w);
	printf("%s", str);
}

void itoa(int n, char s[], int wi)
{
	int i, sign;
	sign = n;
	i=0;
	 while (n != 0)	{
		s[i++] = abs(n%10) + '0';
		n = n/10;
		if (i> (wi-1)) {
			break;
		}
	}
	if (sign <0) {
		s[i++] = '-';
		s[i] = '\0';
	}
		reverse (s);

}

void reverse(char s[])
{
	int i,j,c;
	for (i=0, j=strlen(s)-1; i<j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
