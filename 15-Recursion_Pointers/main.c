#include <stdio.h>
#include <stdlib.h>
long long factorial(int n) {
	long long res=1;
	if(n==1) return 1; //������� � n?
	res=n*factorial(n-1);

	return res;
}
//-> ���������� � �������� ������ ���������� (static)
testStatic(){

		   int a=0;
	static int b=0; // ��������� ���������� ��������� � ��������� ������� ������
					// � ����� �� ����� ���������	
					// �������� ������ � ������ �����
	++a; printf("a=%d\n",a);
	++b; printf("b=%d\n",b);
}
//<--
int main(int argc, char *argv[]) {
	
	printf("Factorial %1d - %lld\n",5, factorial(5));
	
	// ���������� � �������� ������ ����������
	testStatic();
	testStatic();
//


	double d; //&d
	double *pd;
	return 0;
}
