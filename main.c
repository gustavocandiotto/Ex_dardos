#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int x, y;

     printf("Nome: Gustavo Candiotto Silva \n");
    printf("Digite a posi��o que voc� acertou o alvo em (x,y): ");
    scanf("%d %d",&x,&y);

    if (x>10 || x<-10 || y>10 || y<-10)
    {
        printf("Voc� errou o alvo");
    }

    else if ((x>5 && x<11 || x<-5 && x>-11) || (y>5 && y<11 || y<-5 && y>-11))
    {
        printf("Voc� fez 1 ponto");
    }
    else if ((x>1 && x<6 || x<-1 && x>-6) || (y>1 && y<6 || y<-1 && y>-6))
    {
        printf ("Voc� fez 5 pontos");
    }
    else
        printf("Voc� fez 10 pontos!");
}
