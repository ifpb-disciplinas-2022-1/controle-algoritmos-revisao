/*
    Desenvolva um programa em linguagem C para informar ao usuário 
    o valor total de seu pedido em uma lanchonete. A lanchonete deve 
    exibir um menu de código de produtos para o seu cliente: 1 – Suco: R$ 1,50; 
    2 – Refrigerante: R$ 2,50; 3 – Salgado: R$ 3,50 e 4 – Sanduíche: R$ 5,00 
    e 0 – Finalizar Pedido. O cliente deve informar o código correspondente de 
    cada um dos produtos que deseja comprar e a sua respectiva quantidade. 
    Para finalizar o pedido, o usuário deve digitar o número 0. Qualquer 
    código informado diferente dos apresentados deve exibir uma mensagem 
    de erro e solicitar a inserção de um novo código. Após finalizar o pedido, 
    o seu valor total deve ser apresentado ao cliente.
*/

#include <stdio.h>

#define SUCO         1.50
#define REFRIGERANTE 2.50
#define SALGADO      3.50
#define SANDUICHE    5.00

int main()
{
    int codigo, quantidade;
    float valor_pedido = 0;
    
    do 
    {
        printf("\n ---- MENU DE OPCOES ---");
        printf("\n 1 - Suco: R$ 1,50");
        printf("\n 2 - Refrigerante: R$ 2,50");
        printf("\n 3 - Salgado: R$ 3,50");
        printf("\n 4 - Sanduiche: R$ 5,00");
        printf("\n 0 - Finalizar pedido");
        printf("\n -----------------------");
        printf("\n -> ");
        scanf("%d",&codigo);

        switch(codigo)
        {
            case 1:      
                printf(" * Quantos sucos voce deseja? ");
                scanf("%d",&quantidade);
                valor_pedido += SUCO * quantidade; 
                break;
            
            case 2:
                printf(" * Quantos refrigerantes voce deseja? ");
                scanf("%d",&quantidade);            
                valor_pedido += REFRIGERANTE * quantidade; 
                break;
            
            case 3:
                printf(" * Quantos salgados voce deseja? ");
                scanf("%d",&quantidade);            
                valor_pedido += SALGADO * quantidade; 
                break;
            
            case 4:
                printf(" * Quantos sanduiches voce deseja? ");
                scanf("%d",&quantidade);
                valor_pedido += SANDUICHE * quantidade; 
                break;
            
            case 0:
                printf("\n Pedido finalizado!");
                break;
            
            default:
                printf("\n Erro: opcao invalida!");
        };
    } while(codigo != 0);

    printf("\n Valor do pedido: R$ %.2f", valor_pedido);

    return 0;
}