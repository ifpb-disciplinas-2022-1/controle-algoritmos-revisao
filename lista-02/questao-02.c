/*
    Implemente um programa em linguagem C que leia o número 
    de elementos de um vetor que deve ser preenchido com números 
    inteiros pseudoaleatórios entre 0 e cinco vezes o número de 
    elementos do vetor. Como saída, o programa deve exibir todos 
    os elementos do vetor, todos os elementos do vetor em ordem 
    inversa e apenas os elementos dos índices pares do vetor 
    (incluindo a posição inicial, índice zero).
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));  // inicializa a semente do gerador pseudoaleatório

    int tamanho;

    // tamanho desejado para o vetor
    printf(" \n Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor [tamanho];        // declaração do vetor

    // preenchimento do vetor com numeros aleatorios
    for(int i = 0; i < tamanho; i++)
    {
        // número entre 0 e 5 vezes o tamanho do vetor
        vetor[i] = rand() % (5 * tamanho + 1);
    }

    // exibe os elementos do vetor na ordem "direta"
    printf("\n -> Vetor: ");
    for(int i = 0; i < tamanho; i++)
    {
        printf(" %d ", vetor[i]);
    }

    // exibe os elementos do vetor na ordem invertida
    printf("\n -> Vetor invertido: ");
    for(int i = (tamanho - 1); i >= 0; i--)
    {
        printf(" %d ", vetor[i]);
    }

    // exibe os elementos dos índices pares do vetor,
    // incluindo o índice zero
    printf("\n -> Vetor indices pares: ");
    for(int i = 0; i < tamanho; i++)
    {
        if (i % 2 == 0)
        {
            printf(" %d ", vetor[i]);
        }
    }

    // outra opção de código!
    // exibe os elementos dos índices pares do vetor,
    // incluindo o índice zero
    printf("\n vetor indices pares: ");
    for(int i = 0; i < tamanho; i = i + 2)
    {
        printf(" %d ", vetor[i]);
    }

    return 0;
}