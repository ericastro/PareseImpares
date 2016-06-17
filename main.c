#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia 20 números inteiros e armazene-os num vetor.
Armazene os números pares no vetor chamado PAR
e os números ímpares no vetor chamado IMPAR.
Imprima os três vetores.
*/

#define MAX 2

int main()
{
    int numeros[MAX];
    int par[MAX];
    int impar[MAX];
    int i;
    int contaPar = 0;
    int contaImpar = 0;

    for(i=0;i<MAX;i++)
    {
        printf("Digite o %d numero : ", i + 1);
        scanf("%d",&numeros[i]);
    }

    for(i=0;i<MAX;i++)
    {
        if( numeros[i] % 2 )
        {
            impar[contaImpar] = numeros[i];
            contaImpar++;
        }
        else
        {
            par[contaPar] = numeros[i];
            contaPar++;
        }
    }

    printf("\n imprimindo todos os %d valores\n", MAX);
    for(i=0;i<MAX;i++)
    {
        printf("%d - %d\n", i + 1 , numeros[i]);
    }

    printf("\nimprimindo todos numeros pares\n");
    for(i=0;i<contaPar;i++)
    {
        printf("%d - %d\n", i + 1  , par[i]);
    }

    printf("\nimprimindo todos numeros impares\n");
    for(i=0;i<contaImpar;i++)
    {
        printf("%d - %d\n", i + 1 , impar[i]);
    }

    return 0;
}
