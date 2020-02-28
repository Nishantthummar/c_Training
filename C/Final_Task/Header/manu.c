#include <stdio.h>
#include <stdlib.h>
#include "struheader.h"

int main ( int argc, char *argv[] ) {
	system("clear");
	
	int get, roll, ro;
	
	printf("\n\t\tWelcome to Linklist Management Tool\n");
	printf("\n1) To create node at first ");
	printf("\n2) To create node at last ");
	printf("\n3) To create node  after that value ");
	printf("\n4) To delete node at first ");
	printf("\n5) To delete node at last ");
	printf("\n6) To delete node which value have ");
	printf("\n7) To display list of node ");
	printf("\n8) To display sum of roll number of all nodes");
	printf("\n9) To exit");
	
	do {
	printf("\nEnter your choise  ");
	scanf("%d", &get);

	switch (get) {
		case 1:
			printf("\nEnter the roll no which you want to add  ");
			scanf("%d", &roll);
			addNodeAtFirst(roll);
			break;
		case 2:
			printf("\nEnter the roll no which you want to add  ");
			scanf("%d", &roll);
			addNodeAtLast(roll);
			break;
		case 3:
			printf("\nEnter the roll no which you want to add  ");
			scanf("%d", &roll);
			printf("\nEnter the roll no after you want to add  ");
			scanf("%d", &ro);
			addNodeBetween( ro,roll);
			break;
		case 4:
			printf("\nDeleting first node..");
			delNodeAtFirst();
			break;
		case 5:
			printf("\nDeleting last node");
			delNodeAtLast();
			break;
		case 6:
			printf("\nEnter the roll no which you want to del  ");
			scanf("%d", &roll);
			delNodeBetween(roll);
			break;
		case 7:
			printf("\nDisplaying\n\n");
			displayList();
			break;
		case 8:
			printf("\nSum is %d", transerv());
			break;
		}
	} while( get != 9);
}






