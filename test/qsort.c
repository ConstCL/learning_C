#include <stdio.h>
#include <stdlib.h>
#define N 10

int cmp(const void *a, const void *b) {
	return *(int*)a - *(int*)b;
	
}

int main() {
int n,i,j;
int a[N];
scanf("%d", &n);
for(i=0; i<n; i++) {
	scanf("%d", &a[i]);
}

qsort(a, n, sizeof(int), cmp);
	for(i=0; i<n; i++) {
		printf("%d ", a[i]);
	}
return 0;
}
