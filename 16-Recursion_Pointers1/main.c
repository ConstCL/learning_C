#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
double fmax(double d[], int n);
double mymax(double d2[], int row, int column);
double* mystat(double d[], int n); // * - тип возвращаемого значения

int main(int argc, char *argv[]) {
/*первый цикл*/	double d[SIZE]={4.1,5,7,0.94,1,-6,3,2,8,1};
	double min,max;
	max=fmax(d,SIZE); //вызов функции
	mystat(d,SIZE);
	//printf("max=%g\n",max);
	
///*второй цикл*/	double d2[2][3]={{1,2,-3}, {5,7,2}}; //двумерный массив в памяти
//	max=mymax(d2,2,3);					 //  предсавлен как одномерный
//	printf("max d2=%g\n",max);
	
/*третий цикл*/ 
}

double* mystat(double d[], int n){
	double max=d[0], min=d[0];
	for(int i=0; i<n; i++){
		if(d[i] > max) max=d[i];
		if(d[i] > min) min=d[i];
	}
	double res[2]={min,max}; // как вернуть две переменные(массив)
	return res;
}

double mymax(double d2[], int row, int column) {
	double x=d2[0];
	for(int i=0;i<row*column;i++) {
		if(d2[i] > x) x=d2[i]; 
	}
	return x;
}

double fmax(double d[SIZE], int n /* n - это SIZE*/ ){
	//printf("%d\n",sizeof(d));
	double x=d[0];
	for(int i=0;i<n ;i++) {
		if(d[i] > x) x=d[i]; 
	}
	return x;
}


