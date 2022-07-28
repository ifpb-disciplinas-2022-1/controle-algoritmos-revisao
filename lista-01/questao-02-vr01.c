/*

	Considere que os termos de uma sequência são dados pela 
    expressão apresentada a seguir. Crie um programa em linguagem 
    C que recebe do usuário dois números inteiros i e j não negativos, 
    que representam os índices de dois termos da sequência (a_i e a_j). 
    O programa deve exibir todos os termos entre a_i e a_j e o seu somatório.

                a_n = 1 / 2^n com n pertencente aos Naturais

*/

#include <stdio.h>

int main()
{
    int i, j;

    printf(" Digite o indice do primeiro termo: ");
    scanf("%d", &i);

    printf(" Digite o indice do ultimo termo: ");
    scanf("%d", &j);

    float termo, divisor, soma_termos = 0;
    printf("\n Termos: ");
    for(int n = i; n <= j; n++)
    {
        divisor = 1;
        for(int k = 1; k <= n; k++)
        {
            divisor = 2 * divisor;
        }
        
        termo = 1 / divisor;
        printf(" %.7f",termo);

        soma_termos += termo;
    }

    printf("\n Soma dos termos: %.7f",soma_termos);

    return 0;
}