/*
    Desenvolva um programa em linguagem C que solicita ao usuário 
    as dimensões (número de linhas e número de colunas) de duas matrizes
     𝐴 e 𝐵. Em seguida, essas matrizes devem ser preenchidas com números 
     inteiros informados pelo usuário. Caso seja possível, o programa 
     deve exibir como saída o produto matricial entre as duas matrizes: 𝐴𝐵. 
     Observações. O produto matricial 𝐴𝐵 somente é possível se o número 
     de colunas de 𝐴 for igual ao número de linhas de 𝐵. O resultado da 
     multiplicação é uma nova matriz com o mesmo número de linhas de 𝐴 e 
     o mesmo número de colunas de 𝐵.
*/

#include <stdio.h>

int main()
{
    int linhasA, colunasA, linhasB, colunasB;

    // entrada das dimensões da matrizA
    printf("\n -> Numero de linhas e colunas de A: ");
    scanf("%d%d", &linhasA, &colunasA);

    // entrada das dimensões da matrizB
    printf("\n -> Numero de linhas e colunas de B: ");
    scanf("%d%d", &linhasB, &colunasB);

    int matrizA[linhasA][linhasB], matrizB[linhasB][colunasB];

    // preenchimento da matriz A feita pelo usuário
    for (int i = 0; i < linhasA; i++)
    {
        printf("\n");
        for (int j = 0; j < colunasA; j++)
        {
            printf(" -> matrizA[%d,%d] = ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    // preenchimento da matriz B feita pelo usuário
    for (int i = 0; i < linhasB; i++)
    {
        printf("\n");
        for (int j = 0; j < colunasB; j++)
        {
            printf(" -> matrizB[%d,%d] = ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    // verificando condicao para realizar a multiplicacao
    // numero de colunas de A deve ser igual ao numero de linhas de B
    if(colunasA == linhasB)
    {
        // declaracao de matriz resultado do produto
        int resultado [linhasA][colunasB];
        
        // percorrendo linhas de A
        for (int i = 0; i < linhasA; i++)
        {
            // percorrendo colunas de B
            for (int j = 0; j < colunasB; j++)
            {
                resultado[i][j] = 0;  // inicializacao para somatorio                
                // percorrendo os elementos das colunas de B
                for (int k = 0; k < linhasB; k++)
                {
                    // calculando o valor do elemento da i-ésima linha
                    // e j-ésima coluna da matriz resultado
                    resultado[i][j] += matrizA[i][k] * matrizB[k][j];
                }
            }            
        }

        // exibindo o resultado do produto matricial
        // que poderia ter sido exibido ao mesmo tempo que
        // do cálculo do produto. neste caso, nem seria necessário
        // criar a matriz resultado
        for (int i = 0; i < linhasA; i++)
        {
            printf("\n");
            for (int j = 0; j < colunasB; j++)
            {
                printf(" %d ", resultado[i][j]);
            }
        }
    }
    else
    {
        // produto matricial entre as matrizes não
        // é possível
        printf("\n ERRO: dimensoes incompativeis!");
    }

    return 0;
}