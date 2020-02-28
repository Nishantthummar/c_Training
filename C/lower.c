#include <stdio.h>
#include <ctype.h>
void main() /* lower: convert input to lower case*/
{
int c;
while ((c = getchar()) != EOF)
putchar(tolower(c));
//return 0;
}
