#include <stdio.h>
#include <stdlib.h>

#define CUBE(x) ((x)*(x)*(x))
#define SWAPI(x,y) do{int x##y=x; x=y; y=x##y;}while(0) //x##y - конкатенация строк
														// второй раз "do while" не сработает потому что "while(0) (ложь)"

int main(int argc, char *argv[]) {
	int count=2;
	
	CUBE(count);
	printf("%d\n",27/CUBE(count+1));
	
	int a=5,c=7,v=9;
	if(count>0)  SWAPI(a,c); // точка с запятой обязательно, т.к. SWAPI
							 // это функция "do while", и в конце нужна ; 
	else{}
	
	printf("a=%d c=%d\n",a,c);
	
	do printf("Hello\n");
	while(1); // бесконечный цикл
	
	return 0;
} 
