#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,t,n=5;
//	while(n>=0) {
//		printf("Hello\n");
//		n--;
//	}

//	do {
//		printf("Keep it \n");
//		n--;
//	}while(n>=1);

for(i=1; i<n; printf("Keep it \n"), i++) ; // запомнить

for(t=1; t<=100;/* t++ */){
	printf("%3d ",t);
	
	if(t%10==0 ){
		printf("\n");
	}
	t++;
}

	
	return 0;
}
