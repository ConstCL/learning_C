#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	double dat[5]={1,2,3,4,5}; //dat � dat[0] - ����� ���� � ��� �� �����
	
	printf("%X %X \n", &dat[0], dat);
	
	dat[2];  *(dat+2); *(2+dat); 2[dat]; //���� � ����. ����� ������ ������ ������� �������
	
	int i=0;
	for(; i<5; ++i) printf("%g ", *(dat+i));
	printf("\n");
	
	double*p=dat; //����� ������� ��������
	for(i=0;i<5;++i) printf("%g ", *p++);
	printf("\n");
	
	double d2[2][5] = {0}; //������ �� ���� ���������
//	double *p1 [5]; // ������ �� 5 ���������� �� double
	double (*p2) [5]; // ��������� �� ������ �� 5 double
	p2=d2;
	
// ���������� �����

	float t=5.67F;
	float*pf=&t;
	void *pv=&t; // ��������� �� void ����� ��������� ����� �����
				 // ��� ������������� ��� ������
	double*pd=(double*)&t; //������������ ����� ������� ���������� ���� � double
	printf("%g\n",*pf);
	printf("%g\n",*(float*)pd); //������ ������ ������: ��������� �������������
								// �� float, ����� �������������
	printf("%g\n",*(float*)pv);
	
	
		
	return 0;
}
