#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) { //это указатель на массив строк
	
	double dat[5]={1,2,3,4,5}; //dat и dat[0] - имеют один и тот же адрес
	
	printf("%X %X \n", &dat[0], dat);
	
	dat[2];  *(dat+2); *(2+dat); 2[dat]; //одно и тоже. будет вызван второй элемент массива
	
	int i=0;
	for(; i<5; ++i) printf("%g ", *(dat+i));
	printf("\n");
	
	double*p=dat; //адрес первого элемента
	for(i=0;i<5;++i) printf("%g ", *p++);
	printf("\n");
	
	double d2[2][5] = {0}; //массив из двух элементов
//	double *p1 [5]; // массив из 5 указателей на double
	double (*p2) [5]; // указатель на массив из 5 double
	p2=d2;
	
	return 0;
}
