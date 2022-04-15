#include <stdio.h>
#include <stdlib.h>

#define NAME
#define PI 3.14 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num, sum=0, z=0.93;
	printf("Enter number: ");
	scanf("%d",&num);
	int n=num;
	if(num<0) num=-num; // сделали отрицательное положительным
	
	while(num>0){
		sum = sum + num%10;
		num = num / 10;
	}
	
	printf(" sum %d = %d\n",n,sum);
	
	if(z>0)
	printf("Hello"); // не напечатает, потому что 0,93 не больше нуля!
	
	return 0;
}
