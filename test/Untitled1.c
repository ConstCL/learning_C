#include <stdio.h>
#include <stdlib.h>

int sum (int n);

int main(int argc, char *argv[]) {
	int x; 
	x = sum(5);
	printf("%d",x);
	 	 
return 0;
} 

int sum (int n) {  
if(n==1) 
	return 1;
	printf("%d\n",n);
return sum(n-1)+n;




}

