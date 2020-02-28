#include <stdio.h>
void stack(char, int, int*);
void main()
{
	int st[10], loc, val;
	char cmd;
	printf("\nEnter the command ");
	scanf("%c", &cmd);
	printf("\nEnter the value");
	scanf("%d", &val);
//	if (loc <= 10) {
	stack(cmd, val, st);

}
void stack(char c, int v,int s[]) 
{
	int temp, l=0;
	static int sp =10;	
	if (sp != 0) {

	switch (c) {
			case 't' :
				printf("top value is %d", s[l]);
				break;
			case 's' :
				temp = s[l];
				s[l] = s[l+1];
				s[l+1] = temp;
				break;
			case 'c' :
				s[l] = '\0';
				break;
			case 'e' :
				s[l] = v;
				break;
			case 'a':
				if(sp!=0) {
					s[sp] = v;
					sp = sp--;
				}
				break;
			
			default :
				printf("Enter the valid command");

	}
	}
}
		




	
