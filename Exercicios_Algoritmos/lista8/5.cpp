#include<stdio.h>

int
main (void) {

	int vetA[15], vetB[15], fat;

	for (int i = 0; i < 15; i++) {

		printf ("Informe um valor:");
		scanf ("%d", &vetA[i]);

		int n = vetA[i];

		for (fat = 1; n > 1; n = n - 1) 	{
			fat = fat * n;
		}

		vetB[i] = fat;
	}

	printf ("Vetor A \n");

	for (int i = 0; i < 10; i++) {

		printf ("%d\n", vetA[i]);

	}

	printf ("Vetor B \n");

	for (int i = 0; i < 10; i++) {

		printf ("%d\n", vetB[i]);

	}

}

