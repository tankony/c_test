#include<stdio.h>

void main(void) {

	int a[9];
	long b[9];

	printf("sizeof(a)= %u, sizeof(a[0])= %u, size of array a: %u \n", 
			(unsigned)sizeof(a), (unsigned) sizeof(a[0]), (unsigned) (sizeof(a)/sizeof(a[0])));
	printf("sizeof(b)= %u, sizeof(b[0])= %u, size of array b: %u \n", 
			(unsigned)sizeof(b), (unsigned) sizeof(b[0]), (unsigned) (sizeof(b)/sizeof(b[0])));

}
