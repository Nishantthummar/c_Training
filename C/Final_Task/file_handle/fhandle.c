#include <stdio.h>

int main() {
	FILE *fp, *ftemp;
	char a[100];
	
	fp = fopen("test.txt", "r+");
	fgets(a, 100, fp);

	fprintf(fp, "\nthis is written in file");
	printf("%s", a);	
}
