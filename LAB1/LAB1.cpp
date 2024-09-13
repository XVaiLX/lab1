#include <stdio.h>
#include <stdlib.h>

int main() {
	int M[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 0}, i, max=0,min=0;
	for (i = 0; i < 10; i++) {
		if (max <= M[i])
			max = M[i];
		if (min >= M[i])
			min = M[i];
	}
	printf("MAX - MIN = %d", max - min);
}