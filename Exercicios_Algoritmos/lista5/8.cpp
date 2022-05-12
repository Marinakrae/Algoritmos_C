//Leia um n ´umero inteiro de 4 d ´igitos (de 1000 a 9999) e imprima 1 d ´igito por linha.

#include <stdio.h>
#include <stdlib.h>

int main (void) {

	int n, resto, t1=1000, t2=2000, imprimiu=0;

	printf("Informe um numero inteiro de 4 digitos (de 1000 a 9999): \n");
	scanf("%d", &n); 

	for(int i=1; imprimiu!=1; i++) {

		if(n>=t1 && n<t2) {
			resto = n%t1;
			printf("%d\n", i);
			imprimiu++;
		}

		t1 = t1+1000;
		t2 = t2+1000;
	}

	if (imprimiu==1) { //imprimiu o primeiro digito ja

		if(resto==0) {
			printf("%d\n", 0);
			imprimiu++;
		} else {

			t1=100;
			t2=200;

			for(int j=1; imprimiu!=2; j++) {

				if(resto>=t1 && resto<t2) {
					resto = resto%t1;
					printf("%d\n", j);
					imprimiu++;
				}

				t1 = t1+100;
				t2 = t2+100;
			}
		}

	}

	if (imprimiu==2) { //imprimiu o segundo digito ja

		if(resto==0) {
			printf("%d\n", 0);
			imprimiu++;
		} else {

			t1=10;
			t2=20;

			for(int k=1; imprimiu!=3; k++) {

				if(resto>=t1 && resto<t2) {
					resto = resto%t1;
					printf("%d\n", k);
					imprimiu++;
				}

				t1 = t1+10;
				t2 = t2+10;
			}
		}
	}

	if (imprimiu==3) { //imprimiu o terceiro digito ja

		if(resto==0) {
			printf("%d\n", 0);
			imprimiu++;
		} else {

			t1=1;
			t2=2;

			for(int l=1; imprimiu!=4; l++) {

				if(resto>=t1 && resto<t2) {
					resto = resto%t1;
					printf("%d\n", l);
					imprimiu++;
				}

				t1 = t1+1;
				t2 = t2+1;
			}
		}
	}

	system("pause");
}
