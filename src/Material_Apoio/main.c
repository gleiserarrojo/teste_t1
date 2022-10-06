#include <stdlib.h>
#include <stdio.h>
#include "src/sort.h"

// Main Functions
void print_array(int* a, int length){
	int i = 0;
	printf("[");
	do {
		if(i > 0) printf(", ");
		printf("%d", a[i]);
	} while(++i < length);
	printf("]\n");
}

int main(void)
{
	int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	int b[] = {22, 17};
	int c[] = {13};
	int d[] = {7, 8, 20, 3, 19, 15, 17, 2, 6, 384, 495, 4, 1, 1000, 8945, 5, 0, 1968, 98746, 9};
	int e[] = {7, 8, 20, 3, 19, 15, 17, 2, 6, 384, 495, 4, 1, 1000, 8945, 5, 0, 1968, 98746, 9, 47};
	int j[] = {};
	int length = 0;
	
	printf("Unsorted: \n");
	print_array(j, length);

	int status = sort(j, length, (char *)"On2", BUBBLE);
	printf("Status: %d\n", status);
	
	printf("Sorted: \n");
	print_array(j, length);

	return EXIT_SUCCESS;
}