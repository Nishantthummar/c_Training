#include <stdio.h>
void escape();
void main()
{
	char s[20], t[20];
	int i,c,n=20;
	
	printf("\nEnter 20 character including white space "); 
	for(i=0;i<n-1 && (c=getchar())!=EOF;++i) {
    	    t[i]=c;
	}
	t[i]= '\0';
	escape(s,t);
	printf("%s", s);
}

/***************************************************************************//*
*Function for remove tab and newline character by '\t' & '\n' respectively
*@param[in] s[] first string 
*@param[in] t[] second string
******************************************************************************/
void escape(char s[], char t[])
{
	int i,j;
	i=0;
	j=0;
	while(t[i] != '\0') {
		switch(t[i]) {
			case '\t':
				s[j]='\\';
				++j;
				s[j]='t';
				break;
			case '\n':
				s[j]='\\';
				++j;
				s[j]='n';
				break;
			default:
				s[j] = t[i];
				break;
		}
	++i;
	++j;
	}
 s[j]='\0';
}

				
