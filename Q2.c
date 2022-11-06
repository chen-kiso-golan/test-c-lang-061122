#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x = 4;
	int y = 5;
	//intialized the variables.
	int nums[6];
	int* arrPtr;

	// Section A - Print the variables
	puts("***** Section A *****");
	printf(" Base = %d\n", x);
	printf(" Height = %d\n", y);
	printf(" Area = %d\n", (x * y)/2);
	//changed the math from "x*y" to "(x*y)/2.

	// Section B - Print the static array "nums".
	puts("***** Section B *****");
	int i = 0;
	while (i < 6) {
		printf(" nums[%d] = %d\n", i, nums[i]);
		i++;
		//added "i++" to keep the i growing, so the loop couled end.
	}

	// Section C - Print allocated array.
	puts("***** Section C *****");
	arrPtr = malloc(sizeof(int*) * 6);
	//changed the allocated size from "10" to "6". and the type from "int" to "int*" (pointer).
	if (arrPtr) {
		for (i = 0; i < 6; i++) {
			printf(" array[%d] = %d\n", i, arrPtr[i]);
		}
	}
	else {
		printf("Error Allocating Memory!\n");
		exit(1);
	}
	free(arrPtr);
	//added a free function.

	return 0;
}