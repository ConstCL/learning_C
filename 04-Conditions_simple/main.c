#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,max=0;
/*A: B:*/	printf("Input a b c: ");
	scanf("%ld %ld %ld/n",&a,&b,&c);
	
	max=(a>b)?a:b;
	max=(c>max)?c:max;
	
	if (a==b || a==c || b==c){
		printf("Similar values! Repeat.\n");
	//	exit(666);
	// goto B;29369455
	}

	printf("max=%d\n", max);
//	goto A;
//найти max через switch
	int n=3;
	int v=12;
	switch(n,v){
		case 3: printf("3 ");	break;
		case 12: printf("12 ");	break;
		case 6: printf("6 ");	break;
		case 1: printf("1 ");	break;
		default: printf("??");	break;	
		
	}
	
	return 0;
}	
