/*
    Em um determinado campeonato de futebol no formato de pontos
    corridos, um certo time realiza o total de 𝒏 partidas. Elabore
    um programa em linguagem C que leia o número de partidas
    realizadas por um time de futebol em um campeonato e,
    em seguida, receba o número de gols feitos e gols sofridos por
    este time em cada uma de suas partidas. Ao final do programa,
    devem ser impressos em tela o total de pontos da equipe, números
    de vitórias, empates e derrotas, número de gols feitos e sofridos,
    saldo de gols e o percentual de aproveitamento de pontos. Considere
    que uma vitória vale três pontos, um empate apenas um ponto e com
    uma derrota o time não pontua.
*/

#include <stdio.h>

#define PONTOS_VITORIA 3
#define PONTOS_EMPATE 1

int main()
{
    int n_partidas, pontos = 0;
    int vitorias = 0, empates = 0, gols_feitos = 0, gols_sofridos = 0;

    printf("\n -> Numero de partidas realizadas: ");
    scanf("%d", &n_partidas);

    for(int i = 0; i < n_partidas; i++) 
    {
        int golsF, golsS;

        printf("\n\n ------- PARTIDA %d -------", i + 1);
        printf("\n  -> Gols feitos: ");
        scanf("%d", &golsF);
        printf("  -> Gols sofridos: ");
        scanf("%d", &golsS);

        if(golsF > golsS)
        {
            pontos += PONTOS_VITORIA;
            vitorias++;
        }
        else if (golsF == golsS)
        {
            pontos += PONTOS_EMPATE;
            empates++;
        }

        gols_feitos += golsF;
        gols_sofridos += golsS;
    }

    printf("\n * Pontos: %d", pontos);
    printf("\n * Aproveitamento: %.2f", 100 * (float)pontos/(n_partidas * PONTOS_VITORIA));
    printf("\n * Vitorias: %d", vitorias);
    printf("\n * Empates: %d", empates);
    printf("\n * Derrotas: %d", n_partidas - (vitorias + empates));
    printf("\n * Gols feitos: %d", gols_feitos);
    printf("\n * Gols sofridos: %d", gols_sofridos);
    printf("\n * Saldo de gols: %d", gols_feitos - gols_sofridos);

    return 0;
}