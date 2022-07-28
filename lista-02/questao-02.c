#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));   // definicao da raiz do gerador
                         // pseudoaleatorio

    int tamanho;         // tamanho do vetor

    // leitura do tamanho do vetor
    printf("\n -> Tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];   // declaração do vetor

    // preenchimento do vetor
    for (int i = 0; i < tamanho; i++)    
    {
        // preenche com numeros aleatorios entre
        // 0 e 5 vezes o tamanho do vetor
        vetor[i] = rand() % (5 * tamanho + 1);
    }

    // exibe os elementos do vetor em tela
    printf("\n -> Vetor: ");
    for(int i = 0; i < tamanho; i++)
    {
        printf(" %d ", vetor[i]);
    }

    // exibe os elementos do vetor em ordem invertida
    // imprime de trás para frente
    printf("\n -> Vetor invertido: ");
    for(int i = (tamanho - 1); i >= 0; i--)
    {
        printf(" %d ", vetor[i]);
    }

    // exibe em tela os elementos dos índices
    // pares do vetor, incluindo o índice 0
    printf("\n -> Elementos indices pares: ");
    for(int i = 0; i < tamanho; i += 2)
    {
        printf(" %d ", vetor[i]);
    }

    return 0;
}