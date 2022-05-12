#include <stdio.h>
#include <stdlib.h>

int main (void) {

	int para=0;
	float i, media, cont=0;

	while (para==0) {

		printf("Informe uma idade: \n");
		scanf("%f", &i);

		if(i == 0 ) { 
			para=1;
		} else {
			media = media + i;
			cont++;
		}
		
	}
	
	printf("A idade media do grupo eh %.2f \n", media/cont);

	system("pause");
}
