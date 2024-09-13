#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, i, max=0,min=0;
	int* m;
	printf("Vvedite razmer massiva\n");
	scanf("%d", &n);
	m = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
		m[i] = rand();
		if (max <= m[i])
			max = m[i];
		if (min >= m[i])
			min = m[i];
	}
	printf("\nMAX - MIN = %d", max - min);
}