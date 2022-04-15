#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {


int number=5, x;

cubeByRef(&number); 
 
printf("%d",number);
 return 0;
}

void cubeByRef(int *nPtr) {
	*nPtr=*nPtr * *nPtr * *nPtr;
}
