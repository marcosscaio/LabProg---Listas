#include <stdio.h>

#define TAM 15

int main(){

    float vet[TAM],menor_valor,maior_valor;

    for(int i = 0;i < TAM;i++){
        printf("Digite o valor na posição %d:", i+1);
        scanf("%f",&vet[i]);
    }

  for(int i = 0;i < TAM;i++){

        if (i == 0){
            menor_valor = vet[0];
            maior_valor = vet[0];
        }

        else if(maior_valor < vet[i]){
            maior_valor= vet[i];
        }

        else if(menor_valor > vet[i]){
            menor_valor = vet[i];
        }
    }

    printf("Maior valor da array digitada: %.2f\n", maior_valor);
    printf("Menor valor da array digitada: %.2f\n", menor_valor);
    
    return 0;
}