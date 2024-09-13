#include <stdio.h>
#include <stdlib.h>

int main() {
	int M[10], i, max=0,min=0;
	for (i = 0; i < 10; i++) {
		M[i] = rand();
		if (max <= M[i])
			max = M[i];
		if (min >= M[i])
			min = M[i];
	}
	printf("MAX - MIN = %d", max - min);
}