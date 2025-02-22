#include <stdio.h>

void torre()
{
     int torre;
     char cima[] = "Cima";
     char direita[] = "Direita";
     char esquerda[] = "Esquerda";
     char baixo[] = "Baixo";

     for (torre = 0; torre < 5; torre++)
     {
          printf("Torre: %s\n", direita);
     }
}

void rainha()
{
     int rainha;
     char cima[] = "Cima";
     char direita[] = "Direita";
     char esquerda[] = "Esquerda";
     char baixo[] = "Baixo";

     while (rainha < 8)
     {
          printf("Rainha: %s\n", esquerda);
          rainha++;
     }
}

void bispo(char *posicao1, char *posicao2)
{
     int bispo = 0;
     char cima[] = "Cima";
     char direita[] = "Direita";
     char esquerda[] = "Esquerda";
     char baixo[] = "Baixo";

     do
     {
          bispo++;
          printf("Bispo: %s\n", posicao1);

          if (bispo == 5)
          {
               break;
          }

     } while (bispo < 5);

     while (bispo >= 1)
     {
          printf("Bispo: %s\n", posicao2);
          bispo--;
     }
}

void cavalo(char *posicao1, char *posicao2)
{
     int cavalo;
     char cima[] = "Cima";
     char direita[] = "Direita";
     char esquerda[] = "Esquerda";
     char baixo[] = "Baixo";

     for (cavalo = 0; cavalo <= 2; cavalo++)
     {
          printf("Cavalo: %s\n", posicao1);
          cavalo++;

          if (cavalo == 3)
          {
               for (cavalo; cavalo == 3; cavalo--)
               {
                    printf("Cavalo: %s\n", posicao2);
               }
          }
     }
}

int main()
{
     char cima[] = "Cima";
     char direita[] = "Direita";
     char esquerda[] = "Esquerda";
     char baixo[] = "Baixo";

     torre();
     rainha();
     bispo(cima, direita);
     cavalo(cima, direita);

     return 0;
}
