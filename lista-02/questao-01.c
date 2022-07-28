/*
    Dois vetores de mesma dimensão (mesmo número de elementos) podem 
    ser multiplicados por meio do chamado produto escalar. Sejam 𝑎⃗ e 𝑏⃗ 
    vetores pertencentes ao ℝ^𝑛, o produto escalar entre eles é dado por:

        𝑎⃗ ⋅ 𝑏⃗= 𝑎_1 𝑏_1 + 𝑎_2 𝑏_ 2 + ⋯ + 𝑎_(𝑛−1) 𝑏_(𝑛−1) + 𝑎_𝑛 𝑏_𝑛.

    Sabendo disso, elabore um programa em linguagem C capaz de efetuar o 
    produto escalar entre dois vetores.
*/

#include <stdio.h>

#define DIMENSAO 5      // dimensão dos vetores

int main()
{
    // os vetores precisam ter a mesma dimensão
    float vetA [DIMENSAO], vetB[DIMENSAO];  

    // preenchimento do vetor A
    for(int i = 0; i < DIMENSAO; i++)
    {
        printf("\n vetA[%d] = ", i);
        scanf("%f", &vetA[i]);  
    }

    // preenchimento do vetor B
    for(int i = 0; i < DIMENSAO; i++)
    {
        printf("\n vetB[%d] = ", i);
        scanf("%f", &vetB[i]);  
    }

    // armazena o resultado do produto escalar
    float produto_escalar = 0;

    // produto escalar entre vetores
    for(int i = 0; i < DIMENSAO; i++)
    {
        produto_escalar += vetA[i] * vetB[i];
    }
    
    // exibe o produto escalar entre os vetores A e B
    printf("\n -> Produto Escalar: %.2f\n", produto_escalar);

    return 0;
}