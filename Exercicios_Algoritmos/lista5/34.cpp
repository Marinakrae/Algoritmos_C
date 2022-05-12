#include <stdio.h>
#include <stdlib.h>

int main (void) {

	int cont=0, para=0;
	float n, media;

	do {

		printf("Informe uma nota: \n");
		scanf("%f", &n);

		if(n>=10 && n<=20) {
			media = media + n;
			cont++;
		} else {
			para = 1;
		}

	} while (para==0);

	printf("A media aritmetica das notas eh %.2f \n", media/cont);

	system("pause");
}
