#include <stdio.h>

int RetornaTotal(int *vetor){

    int *novovetor, cont=0, i=0;

    novovetor = vetor;

    for(int i=0; i<15; i++){


        if(vetor[i] > 5){
            cont++;
        }


    }
    printf("Total de numeros meiores de 5: %d", cont++);


}

int main (void) {
    int pNums[15], i;
    for(int i=0; i<15; i++){

        scanf("%d", &pNums[i]);
    }

    RetornaTotal(pNums);

}
