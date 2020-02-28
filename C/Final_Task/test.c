#include <stdio.h>
#include <stdlib.h>
#include "myheader.h"
int main() {
	 struct student *p1;
	 int add =0;

	 addNodeAtFirst(10);
	 addNodeAtLast(30);
	 add = transerv();
	 printf("\nSum is %d", add);
 }
