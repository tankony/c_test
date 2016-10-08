#include<stdio.h>

void main(int argc, char* argv[]) 
{
	printf("test script\n");

	int* nump;
	int num = 36;

	nump = &num;


	printf("num: %d,addr: %p\n", *nump, nump);

	*nump = 99;

	printf("num: %d,addr: %p\n", num, &num);


	printf("%d, %s\n", argc, argv[1]);
}

