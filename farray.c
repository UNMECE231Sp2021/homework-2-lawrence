#include <stdio.h>
#include "float_array.h"
#include <stdlib.h>
void mallocate(farray *array, int size) {
	array->data = (float *) malloc(size * sizeof(float));
	array->size = size;
}
void callocate(farray *array, int size){
	array->data = (float *) calloc(size,sizeof(float));
	array->size = size;	
}
float access_value(farray *array, int index){	
	if(array->size > index){
		printf("the index is out of bounds\n");
	return -1.0;
	}
	return array->data[index];
	
	
}

int set_value(farray *array, int index, float value){
	if(array->size > index){
		printf("the index is out of bounds\n");
		return 1;
	}
		array->data[index] = value;
		return value;
}


void print_farray(farray *array){
	for(int i = 0; i < array->size; i++){
		printf("%d\n", array->size+i);
	}
	printf("\n");
	return;
}
void free_farray(farray *array){
	free(array);
}
