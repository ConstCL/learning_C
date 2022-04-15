#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,r, num=100;

	for(r=2; r<num; r++) {
		for(i=2; i<num; i++) {
			if (r%i==0) 
			break;
			if(i==r-1) printf("%d ",r);
		}
	}
	return 0;
}
