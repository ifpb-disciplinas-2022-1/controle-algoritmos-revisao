/*

    Crie um programa em linguagem C que analisa uma matriz de 
    ordem quadrada com elementos informados pelo usuário, exibe 
    o produto de sua diagonal principal e indica se a matriz é 
    diagonal. Uma matriz é dita diagonal se todos os elementos 
    que não pertencem à diagonal principal são nulos e pelo menos 
    um elemento da diagonal principal for diferente de zero.
*/

#include <stdio.h>

#define ORDEM        3    // ordem da matriz quadrada
#define INDEFINIDO  -1    // matriz diagonal? indefinido
#define DIAGONAL     1    // matriz diagonal
#define NAO_DIAGONAL 0    // matriz não diagonal

int main()
{
    int matriz [ORDEM][ORDEM];      // declaração da matriz

    for(int i = 0; i < ORDEM; i++)       // numero de linhas igual a ORDEM
    {
        printf("\n");
        for(int j = 0; j < ORDEM; j++)   // número de colunas igual a ORDEM
        {
            // preenchimento da matriz feita pelo usuário
            printf(" -> matriz[%d,%d] = ",i,j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // cálculo do produto da diagonal
    // percorrendo apenas os elementos da diagonal
    // um elemento pertence à diagonal principal se o
    // índice de linha for igual ao índice de coluna
    int produto_diagonal = 1;
    for(int i = 0; i < ORDEM; i++)
    {
        produto_diagonal *= matriz[i][i];
    }    

    int teste_diagonal = INDEFINIDO;    // variavel auxiliar
                                        // estado do teste diagonal indefinido
    
    // o laço mais externo (percorre linhas) continua enquanto i for menor que ORDEM
    // e se a matriz não for identificada como NAO_DIAGONAL
    // assim que a matriz é identificada como NAO_DIAGONAL, o laço é interrompido
    for(int i = 0; (i < ORDEM) && (teste_diagonal != NAO_DIAGONAL); i++)
    {
        // percorrendo as colunas
        for(int j = 0; j < ORDEM; j++)
        {       
            // elemento fora da diagonal principal é diferente de zero?     
            if(i != j && matriz[i][j] != 0)
            {
                // neste caso, a matriz é NÃO_DIAGONAL e APENAS o laço
                // mais interno é interrompido pelo break
                teste_diagonal = NAO_DIAGONAL;
                break;
            }
            else if(i == j && teste_diagonal == INDEFINIDO && matriz[i][j] != 0)
            {
                // matriz potencialmente DIAGONAL, pois encontrou elemento
                // da diagonal principal que é diferente de zero
                teste_diagonal == DIAGONAL;
            }
        }
    }

    // exibe produto da diagonal principal
    printf("\n -> Produto da diagonal: %d", produto_diagonal);
    
    // usa operador ternário para indicar se a matriz é diagonal
    // a partir do teste da variável teste_diagonal
    teste_diagonal ? printf("\n -> Matriz diagonal!") 
                   : printf("\n -> Matriz NAO diagonal!");

    return 0;
}