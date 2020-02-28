#include <stdio.h>
void expand();
void main()
{
	char s1[6], s2[30];
	int i, c;
	for (i=0; i<6 && (c=getchar())!=EOF; i++)
	{
		s1[i]=c;
	}
	s1[i]='\0';
	expand(s1,s2);
	printf("\n%s", s2);
		
}
void expand(char s1[], char s2[])
{
	int i=0, min, max, j;
	for (i=0; i<6; i++) {
		printf("\n%c", s1[i]);
		if (s1[i] == '-') {
			min = s1[i-1];
			max = s1[i+1];
			while (min <= max) {
				s2[j] = min;
				min++;
				j++;
			}
		}
	}
}

