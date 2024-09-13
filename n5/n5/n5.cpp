#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int main() {
	int n, i, a, k=0;
	char fam[20], grup[20];
	printf("Vvedite kolvo studentov\n"); scanf("%d", &n);
	struct student {
		char f[20];
		char gr[20];
		int nk;
	}*stud;
	stud = (student*)malloc(n * sizeof(student));
	for (i = 0; i < n; i++) {
		printf("\nFamiliya?\n"); scanf("%s", &stud[i].f);
		printf("Gruppa?\n"); scanf("%s", &stud[i].gr);
		printf("Nomer kursa?\n"); scanf("%d", &stud[i].nk);
		printf("\nFamiliya %s  gruppa %s  nomer kursa %d\n", stud[i].f, stud[i].gr, stud[i].nk);
	}
	printf("\n\nPOISK\n\n\n");
	printf("\nFamiliya?\n"); scanf("%s", &fam);
	printf("Gruppa?\n"); scanf("%s", &grup);
	printf("Nomer kursa?\n"); scanf("%d", &a);
		for (i = 0; i < n; i++) {
			if ((strcmp(fam, stud[i].f) == 0) && (strcmp(grup, stud[i].gr) == 0) && (a == stud[i].nk)) {
				printf("Student naiden:\n%s %s %d", stud[i].f, stud[i].gr, stud[i].nk);
			}
			else
				k = 1;
		}
	if (k == 1) printf("Student ne naiden");
}