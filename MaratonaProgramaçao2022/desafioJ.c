#include <stdio.h>

int main()
{
    int N, Joao[2], Maria[2];

    scanf("%d", &N);
    scanf("%d %d", &Joao[0], &Joao[1]);
    scanf("%d %d", &Maria[0], &Maria[1]);

    int i, naipe, cartasComuns[N], somacComuns=0, somacMaria, somacJoao, cartaGanhou, cartaJperdeu;


    for(i=0; i<N; i++)
    {
        scanf("%d", &cartasComuns[i]);
        somacComuns = somacComuns + cartasComuns[i];
    }

    somacMaria = Maria[0] + Maria[1] + somacComuns;
    somacJoao = Joao[0] + Joao[1] + somacComuns;

    cartaGanhou = 23 - somacMaria;
    int valorInicial = cartaGanhou;
    cartaJperdeu = 24 - somacJoao;

    if(somacJoao>somacMaria && !(cartaJperdeu<1 || cartaJperdeu>10))
    {
        cartaGanhou=cartaJperdeu;
    }

    do
    {
        naipe=0;
        for(i=0; i<N; i++)
        {
            if(cartaGanhou==cartasComuns[i])
            {
                naipe++;
            }
        }
        for(i=0; i<2; i++)
        {
            if(cartaGanhou==Maria[i])
            {
                naipe++;
            }
            if(cartaGanhou==Joao[i])
            {
                naipe++;
            }
        }
        if(naipe==4)cartaGanhou++;
    }
    while(naipe==4);

    if((cartaGanhou<1 || cartaGanhou>10) || cartaGanhou>valorInicial)cartaGanhou=-1;

    printf("%d", cartaGanhou);

    return 0;
}
