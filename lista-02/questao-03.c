#include <stdio.h>

int main()
{
    int tam1, tam2, tam3;   // declaracao de variaveis (tamanho)

    // leitura dos tamanhos dos vetores 1 e 2
    printf("\n -> Tamanho do vetor1: ");
    scanf("%d", &tam1);

    printf(" -> Tamanho do vetor2: ");
    scanf("%d", &tam2);

    tam3 = tam1 + tam2;    // tamanho do vetor 3

    // declaração dos vetores
    int vetor1[tam1], vetor2[tam2], vetor3[tam3];

    printf("\n");    

    // preenchimento do vetor1
    for (int i = 0; i < tam1; i++)
    {
        printf(" -> vetor1[%d] = ", i);
        scanf("%d", &vetor1[i]);
    }

    printf("\n");

    // preenchimento do vetor2
    for (int i = 0; i < tam2; i++)
    {
        printf(" -> vetor2[%d] = ", i);
        scanf("%d", &vetor2[i]);
    }    

    // preenchimento do vetor3
    // notem a declaracao de duas variaveis (i e j)
    // i percorre os indices de vetor2 e j os indices
    // de vetor3. somente o valor de j é incrementado 
    // pela estrutura for. o valor de i é incrementado
    // no bloco de comandos do for
    for (int i = 0, j = 0; i < tam3; j++)
    {
        if(j < tam1 && j < tam2)
        {
            // enquanto nenhum dos vetores tiverem todos
            // seus elementos lidos
            vetor3[i++] = vetor1[j];
            vetor3[i++] = vetor2[j];
        }
        else if (tam1 > tam2)
        {
            // todos os elementos lidos de vetor2
            // falta preencher vetor3 com os elementos restantes de vetor1
            vetor3[i++] = vetor1[j];
        }
        else
        {
            // todos os elementos lidos de vetor1
            // falta preencher vetor3 com os elementos restantes de vetor2
            vetor3[i++] = vetor2[j];
        }
    }

    printf("\n Vetor3: ");
    // exibe os elementos do vetor3
    for (int i = 0; i < tam3; i++)
    {
        printf(" %d ", vetor3[i]);
    }

    return 0;
}