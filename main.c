#include <stdio.h>
#include <stdlib.h>
#include "float_array.h"

int main() {
	farray f1;
	mallocate(&f1, 10);
	int i = 0;
	for(i=0; i<10; i++) {
		set_value(&f1, i, i);
	}
	print_farray(&f1);

	farray f2;
	callocate(&f2, 5);
	print_farray(&f2);

	set_value(&f2, 3, access_value(&f1, 6));
	set_value(&f2, 1, access_value(&f1, 3));
	print_farray(&f2);

	farray f3;
	mallocate(&f3, 9);
	i = 0;
	for(i=0; i<10; i++){
		set_value(&f3, i, i+9);
	}
	print_farray(&f3);

	free_farray(&f1);
	free_farray(&f2);
	free_farray(&f3);
	return 0;
}
