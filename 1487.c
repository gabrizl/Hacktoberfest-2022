//1487 - Six Flags
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct brinquedo
{
    unsigned short tempo;
    unsigned short qtsPontos;
    double razaoPontoTempo;
} brinquedo;

int compara(brinquedo *a, brinquedo *b);

int main()
{
    unsigned short i, cont, aux, qtsAtracoes, limiteTempo, pontoTotal, tempoTotal;

    cont = 0;
    while (1)
    {
        scanf("%hu %hu", &qtsAtracoes, &limiteTempo);

        if (qtsAtracoes == 0)
            break;

        brinquedo brinquedos[qtsAtracoes];

        for (i = 0; i < qtsAtracoes; ++i)
        {
            scanf("%hu %hu", &brinquedos[i].tempo, &brinquedos[i].qtsPontos);
            brinquedos[i].razaoPontoTempo = (brinquedos[i].qtsPontos / brinquedos[i].tempo);
        }
        qsort(brinquedos, qtsAtracoes, sizeof(brinquedo), compara);

        i = 0;
        pontoTotal = tempoTotal = 0;

        while (i < qtsAtracoes)
        {
            aux = tempoTotal + brinquedos[i].tempo;
            if (aux <= limiteTempo)
            {
                pontoTotal += brinquedos[i].qtsPontos;
                tempoTotal = aux;
            }
            else
                i++;
        }
        printf("Instancia %hu\n%hu\n\n", ++cont, pontoTotal);
    }
}
int compara(brinquedo *a, brinquedo *b)
{
    if (a->razaoPontoTempo == b->razaoPontoTempo)
        return 0;
    else if (a->razaoPontoTempo > b->razaoPontoTempo)
        return -1;
    else
        return 1;
}
