#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int r=7;
	int t=8;
	int k1=12;
	char w = '$';
	double a, b=8, c=4;
	//a=b/c;
	printf("k1 = %d  %lld\n", k1, 123456789123);
	printf("size= %d\n",sizeof('$'));
	printf("%g\n",(double)r/t);
	int num;
	num=printf("Hello ");
	printf("%d\n", num);
	return 0;
} 
