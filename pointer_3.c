#include<stdio.h>

void edit(int* p) {
//void edit(int p[]) {
	if ((unsigned)(sizeof(p) / sizeof(p[0])) > 4) {
		printf("sizeof: %d\n", sizeof p);
		p[2] = 99;
	}
}

void main(int args, char* argv[])
{
	printf("pointer array test--------\n");
	int test[] = {1,2,3,4,5};
	int* p = test;

	printf("test[0]=%d, test[1]=%d \n", *p, *(p+1));

	printf("p[4]=%d, *(p+4)=%d \n", p[4], *(p+4));

	printf("pointer array test--------\n");
	
	edit(test);

	printf("p[2]= %d, p[5]=%d\n", test[2], test[5]);

	printf("array size: %u\n", (unsigned)(sizeof(test)/sizeof(test[0])));

}

