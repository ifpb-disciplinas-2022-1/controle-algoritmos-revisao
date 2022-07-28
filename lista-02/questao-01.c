#include <stdio.h>

#define DIMENSAO 5  // tamanho dos vetores

int main()
{
    // declaração dos vetores. devem ser do mesmo tamanho
    float vetorA[DIMENSAO], vetorB[DIMENSAO];

    // preenchimento do vetorA
    for(int i = 0; i < DIMENSAO; i++)
    {
        printf(" vetorA[%d] = ", i);
        scanf("%f", &vetorA[i]);
    }

    printf("\n");

    // preenchimento do vetorB
    for(int i = 0; i < DIMENSAO; i++)
    {
        printf(" vetorB[%d] = ", i);
        scanf("%f", &vetorB[i]);
    }

    // resultado do produto escalar
    float produto_escalar = 0;

    // cálculo do produto escalar
    for(int i = 0; i < DIMENSAO; i++)
    {
        produto_escalar += vetorA[i] * vetorB[i];
    }

    // exibe o resultado do produto escalar entre vetorA e vetorB
    printf("\n -> Produto escalar: %.2f\n", produto_escalar);

    return 0;
}