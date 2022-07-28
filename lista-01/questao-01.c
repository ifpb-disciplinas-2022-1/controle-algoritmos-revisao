/*
  Escreva um programa em linguagem C que leia o termo inicial, a razão 
  de uma PG e o número de termos, nt. O algoritmo deve imprimir em tela 
  os n-ésimos primeiros termos da Progressão Geométrica. A fórmula do 
  termo geral de uma PG é dada por:

                    a_n = a_1 * q ^ (n-1)
*/

#include <stdio.h>

int main()
{
    int a1, q, nt;

    printf(" Digite o valor do primeiro termo da PG: ");
    scanf("%d", &a1);

    printf(" Digite a razao da PG: ");
    scanf("%d", &q);    

    printf(" Digite o numero de termos a ser exibido: ");
    scanf("%d", &nt);

    for(int n = 1; n <= nt; n++)
    {
        if(n != 1)
        {
            a1 = a1 * q;
        }

        printf("\n a%d = %d", n, a1);   
    }

    return 0;
}