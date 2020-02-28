#include <stdio.h>
/**
 * including header fie here 
 **/

#include "head.h"

void main() {
	int x = 10;  //!< variable x 
        int y = 20;  //!< variable y

	add(x, y);  //!< calling from head.h
	mul(x, y);  //!< calling from head.h
}
