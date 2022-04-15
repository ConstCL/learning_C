#include <stdio.h>
#include <stdlib.h> 
//найти min и max значения массива

//void minMax(int *d, int n, int*pa, int*pb ){
//	int i, min,max;
//	min=max=d[0]; //min=max=*d
//	
//	for(i=1;i<n;i++){
//	
//		if(d[i]>max) max=d[i];
//		if(d[i]<min) min=d[i];
//	}
//	//printf("%d %d",min, max); 
//	// return &min - не сработает, потому что нельзя передать за пределы функции.
//	//возврат двух значений:
//	//int res[2]={min,max}; тоже не сработает
//	if(*pa!=0) *pa=min; //разименование *pa
//	if(*pb!=0) *pb=max;
//}

int* minMax2(int *d, int n){
	int i, min,max;
	min=max=d[0]; //min=max=*d
	
	for(i=1;i<n;i++){
	
		if(d[i]>max) max=d[i];
		if(d[i]<min) min=d[i];
	}
	int*p=malloc(2*sizeof(int));
	if(p==0)	return;
	p[0]=min;	p[1]=max;
	return p;
}

int main(int argc, char *argv[]) {

	int d[7]={3,1,5,18,5,2,-4};
	int a,b;
//	minMax(d,7,&a,&b);
//	printf("%d %d",a,b);
	int*res=minMax2(d,7);
	printf("%d %d",res[0],res[1]);
	
	free(res);
	res=0;
}


