#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, k, a, i, max = 0, min = 0,sum;
	int** m;
	printf("Vvedite kol-vo strok\n");
	scanf("%d", &n);
	printf("Vvedite kol-vo stolbov\n");
	scanf("%d", &k);
	m = (int**)malloc(n * sizeof(int*));
	for (i = 0; i < n; i++) {
		m[i] = (int*)malloc(k * sizeof(int));
	}
	for (i = 0,sum=0; i < n; i++) {
		for (a = 0; a < k; a++) {
			m[i][k] = rand();
			sum += m[i][k];
			printf("%d ", m[i][k]);
			if (max <= m[i][k])
				max = m[i][k];
			if (min >= m[i][k])
				min = m[i][k];
		}
		printf("\nsum=%d\n",sum);
		sum = 0;
	}
	printf("\nMAX - MIN = %d", max - min);
	free(m);
}