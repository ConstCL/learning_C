#include <stdio.h>
#include <stdlib.h>
#define TEST
#define SIZE 10
#define SIZET 10


int main(int argc, char *argv[]) {

//	int a = 89;
//	int b = 11;
//	b=a+b;
//	a=b-a;
//	b=b-a; 
//	printf(" a= %d\n b= %d\n",a,b);
//		
//#ifdef TEST
//	printf("test1 line=%d %s\n",__LINE__,__func__ );
//#endif

double dat[SIZE] = {3,5,7,[8]=33,34};
for(int i=0; i<10; i++) printf("%g",dat[i]);

int arrlen = 40;
int array[arrlen];// VLA массив
//printf("%.f",dat[1]);

double d5[SIZET]={3,11,5,7,-9,3,2,1};
double min=d5[0], max=d5[0], sum=0;

for(int q=0;q<SIZET;q++){
	sum+=d5[q];
	if(d5[q]<min) min=d5[q];
	if(d5[q]>max) max=d5[q];
}
printf("\n%g %g %g",min,max,sum);

	return 0;
}
