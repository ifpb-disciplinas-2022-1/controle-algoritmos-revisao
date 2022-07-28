/*
	Crie um programa em linguagem C que leia o tamanho 
    de dois vetores (vetor1 e vetor2), cujos elementos 
    devem ser informados pelo usuário. Em seguida, um novo 
    vetor (vetor3) deve ser criado, contendo os elementos dos 
    dois vetores, conforme os exemplos abaixo:

    VER NO ARQUIVO PDF
*/

#include <stdio.h>

int main()
{
    int tam1, tam2, tam3;  // tamanho dos vetores
    
    // leitura do tamanho do vetor 1
    printf("\n -> Tamanho do vetor 1: ");
    scanf("%d",&tam1);

    // leitura do tamanho do vetor 2
    printf(" -> Tamanho do vetor 2: ");
    scanf("%d",&tam2);

    tam3 = tam1 + tam2;

    int vetor1[tam1], vetor2[tam2], vetor3[tam3];  // declaração dos vetores

    printf("\n");

    // preenchimento do vetor 1
    for(int i = 0; i < tam1; i++)
    {
        printf(" -> Vetor1[%d] = ", i);
        scanf("%d", &vetor1[i]);
    }

    // preenchimento do vetor 2
    for(int i = 0; i < tam2; i++)
    {
        printf(" -> Vetor2[%d] = ", i);
        scanf("%d", &vetor2[i]);
    }

    // preenchimento do vetor 3
    // são criadas duas variáveis inteiras no for
    // mas apenas o j é incrementada pela estrutura for
    // i é incrementada no bloco de comandos da estrutura
    // o i percorre os índices (posições) do vetor3
    // o j percorre os índices (posições) dos vetores 1 e 2
    for(int i = 0, j = 0; i < tam3; j++)
    {
        if(j < tam1 && j < tam2)
        {
            // enquanto nenhum dos vetores (1 e 2)
            // não tenham sido totalmente percorridos
            vetor3[i++] = vetor1[j];
            vetor3[i++] = vetor2[j];
        }
        else if (tam1 > tam2)
        {
            // caso o vetor 2 já tenha sido percorrido
            // e o vetor 1 ainda tenha elementos a adicionar
            // no vetor 3
            vetor3[i++] = vetor1[j];
        }
        else
        {
            // caso o vetor 1 já tenha sido percorrido
            // e o vetor 2 ainda tenha elementos a adicionar
            // no vetor 3
            vetor3[i++] = vetor2[j];
        }
    }

    // exibe elementos do vetor 3
    for(int k = 0; k < tam3; k++)
    {
        printf("\n -> Vetor3[%d] = %d", k, vetor3[k]);
    }

    return 0;
}