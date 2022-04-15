#include <stdio.h>
#include <stdlib.h>

void swap(int *px, int *py);
//double powN(double d, int n);

int main(int argc, char *argv[]) {
	int x=5,y=2;
	swap(&x,&y); 
	printf("x=%d y=%d\n",x,y);

	return 0;
}
void swap(int *px, int *py){
	int tmp=*px; //tmp=x;
	*px=*py;
	*py=tmp;
}
