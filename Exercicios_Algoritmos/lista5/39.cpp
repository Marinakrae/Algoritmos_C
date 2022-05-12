#include <stdio.h>
#include <stdlib.h>

int main (void) {

	int para=0;
	float r1, r2;

	while (para==0) {

		printf("Informe os valores dos resistores R1 e R2: \n");
		scanf("%f %f", &r1, &r2);

		if(r1 == 0 || r2 == 0) {
			para=1;
			printf("O valor nao pode ser 0 \n");
		} else {
			printf("A associacao em paralelo desses resistores eh: %.2f\n", (r1*r2)/(r1+r2));
		}
	}

	system("pause");
}
