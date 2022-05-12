#include <stdio.h>
#include <stdlib.h>

int main (void) {

	//usar o resto de divisao do anterior
	
	int saque, resto, n100=0, n50=0, n20=0, n10=0, n5=0, n2=0, n1=0;

	printf("Insira o valor do saque realizado pelo cliente: \n");
	scanf("%f", &saque);
	
	if - resto da divisao - testar se o resto é 0 ai pula pra proxima

	//while (saque > 0) { //enquanto o valor for maior que zero

		if (saque>=100) { //se é maior que 100
			n100 = saque/100;  //263/100 - 2 notas de 100
			resto = saque%100; //resto 63
			saque = resto;

			if (saque>0) { //testar as outras possibilidades   - testar se é 0 nos outros tb?

				if(saque>=50 && saque<=100) { //notas de 50
					n50 = saque/50; //63/50=1 (arredondado int)
					resto = saque%50; //resto 13
					saque = resto; //saque=13

					if(saque>=20 && saque<=50) { //notas de 20
						n20 = saque/20;
						resto = saque%20;
						saque = resto;

						if (saque>=10 && saque<=20) { //notas de 10
							n10 = saque/10; //n10 = 1
							resto = saque%10; //3
							saque = resto; //saque=3

							if (saque>=5 && saque<=10) { //notas de 5
								n5 = saque/5;
								resto = saque%5;
								saque = resto;

								if (saque>=2 && saque<=5) { //notas de 2
									n2 = saque/2; //n2 = 1
									resto = saque%2; //resto = 1
									saque = resto; //saque = 1

									if (saque>=1 && saque<=2) { //moedas de 1
										n1 = saque; //n1 = 1
									}

								}

							}

						}
					}
				}

			}

		} /* else if (saque>=50 && saque<=100) { //se esta no intervalo 100-50
			n50 = saque/50;
			resto = saque%50;
			saque = saque - (50*n50);
		} else if (saque>=20 && saque<=50) { //se esta no intervalo 50-20
			n20 = saque/20;
			resto = saque%20;
			saque = saque - (20*n20);
		} else if (saque>=10 && saque<=20) { //se esta no intervalo 20-10
			n10 = saque/10;
			resto = saque%10;
			saque = saque - (10*n10);
		} else if (saque>=5 && saque<=10) { //se esta no intervalo 10-5
			n5 = saque/5;
			resto = saque%5;
			saque = saque - (5*n5);
		} else if (saque>=2 && saque<=5) { ////se esta no intervalo 5-2
			resto = saque%2;
		} else if (saque>=2 && saque<=1) { ////se esta no intervalo 2-1
			resto = saque%1;
		} */

	//}

	printf("Serao necessarios %d notas de 100,  %d notas de 50, %d notas de 20, %d notas de 10, %d notas de 5, %d notas de 2 e %d moedas de 1 real \n", n100, n50, n20, n10, n5, n2, n1);

	system("pause");
}
