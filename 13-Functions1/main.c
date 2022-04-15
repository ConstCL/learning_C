#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
double fmax(double d[SIZE], int n);

int main(int argc, char *argv[]) {
	double d[SIZE]={4.1,5,7,0.94,1,-6,3,2,8,1};
	double min,max;
	max=fmax(d,SIZE); //вызов функции
	printf("max=%g\n",max);
	
	return 0;
}

double fmax(double d[SIZE], int n /* n - это SIZE*/ ){
	//printf("%d\n",sizeof(d));
	double x=d[0];
	for(int i=0;i<n ;i++) {
		if(d[i] > x) x=d[i]; 
	}
	return x;
}
