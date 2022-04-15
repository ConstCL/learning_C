#include <stdio.h>
#include <stdlib.h>
long long factorial(int n) {
	long long res=1;
	if(n==1) return 1; //возврат в n?
	res=n*factorial(n-1);

	return res;
}
//-> упражнение с классами памяти переменных (static)
testStatic(){

		   int a=0;
	static int b=0; // локальная переменная размещена в сатиеской области памяти
					// и живет до конца программы	
					// доступна только в рамках когда
	++a; printf("a=%d\n",a);
	++b; printf("b=%d\n",b);
}
//<--
int main(int argc, char *argv[]) {
	
	printf("Factorial %1d - %lld\n",5, factorial(5));
	
	// упражнение с классами памяти переменных
	testStatic();
	testStatic();
//


	double d; //&d
	double *pd;
	return 0;
}
