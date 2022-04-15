#include <stdio.h>
#define SIZE 10

int main(int argc, char *argv[]) {
	int j,i;
	
	int matr[][4] = { {2, 4, 6, 1},
					 {13,21,11,17} };
	
	for(i=0;i<2;i++){
		for(int q=0;q<4;q++) printf("%4d ",matr[i][q]);
		printf("\n");
	}
	printf("\n");
	//сортировка
	//data
	int dat[SIZE]={32,2,5,7,33,11,98,71,23,16};
//	srand(time(0));
//	for(i=0; i<SIZE; ++i)	dat[i]=rand();	
	
	
	// bsort
	for(i=1; i<SIZE; ++i) {
		for(j=0; j<SIZE-1; ++j)
			if(dat[j]>dat[j+1])  {
				int tmp=dat[j];
				dat[j]=dat[j+1];
				dat[j+1]=tmp;
			}
	}
	// print
	printf("\n");
	for(i=0; i<SIZE; ++i)	printf("%6d",dat[i]);
	//// ГПСЧ ////
	printf("\n");
	srand((unsigned/*беззнаковое*/)time(0 /*NULL*/));
	   for(int i = 0; i < 10; i++ )
      printf( "%6d\n", rand() );
	return 0;
}
