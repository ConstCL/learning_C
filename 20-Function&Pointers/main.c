#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 10

int func1(const void* p1, const void* p2) {
	int res=0;
	int a=*(int*)p1;
	int b=*(int*)p2;
	if(a>b) res=1;
	else if(a<b) res=-1;
	
	return res;
}

int func2(const void* p1, const void* p2) { //сортировка в обратном порядке
	
	return -func1(p1,p2);
}


int main(int argc, char *argv[]) {
	 
	 printf("%g\n", cos(3.1415));
	 printf("%X %X\n",&cos, cos);
	 
	 double (*pf)(double x);
	 pf=cos; // указатель на функцию
	 printf("%g\n", pf(3.1415));
	 
	 int i, d[SIZE];
	 for(i=0;i<SIZE; i++)	d[i]=rand()%100;
	 qsort(d, SIZE, sizeof(int),func2);
	 for(i=0;i<SIZE; i++)	printf("%d ",d[i]);
	 
	return 0;
} 
