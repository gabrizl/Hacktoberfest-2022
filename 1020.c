// 1020 - Idade em Dias
#include <stdio.h>

int main() {

    int idade,ano,mes,dia,resto_ano;

    scanf("%d",&idade);
    ano=idade/365;
    resto_ano=idade%365;
    mes=(resto_ano/30);    
    dia=(resto_ano%30);

    printf("%d ano(s)\n",ano);
    printf("%d mes(es)\n",mes);
    printf("%d dia(s)\n",dia);


    return 0;
}
