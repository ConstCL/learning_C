#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_CTYPE, "Rus");
	int max;
	int a=3,b=7;
	
	if(a>b) {
		double count=0, num=5.1;
	printf(" ''a'' больше");
	max=a;
	}else{
	printf(" 'b' больше ");
	max=b;
	}
	printf("%d\n", max);
	return 0;
}
