#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	
	printf("%c - symbol\n",56);
	
	for(i=0; i<20; ++i){
	 
		switch(i){
		case '\0': printf("%4d - \\0\n",i);break;
		case '\a': printf("%4d - sound\n",i);break;
		case '\b': printf("%4d - backspace\n",i);break;
		case '\t': printf("%4d - tab\n",i);break;
		case 10: printf("%4d - enter\n",'\n');break;
		case 13: printf("%4d - \\r \n",'\r');break; //Carriage Return
			default: printf("%4d - %c\n",i,i);break;
		}	
	}
	return 0;
}
