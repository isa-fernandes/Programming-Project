#include <stdio.h>
#include <stdlib.h>

void line_start()
{
  int i;
   printf("\n\n");
  for ( i = 0; i < 45; i++)
  printf("*");
}

void line_end()
{
  int i;
  printf("\n");
  for ( i = 0; i < 45; i++)
  printf("=");
}

void ADM()
{
    line_start();
    printf("\nOla, ADM! Que procedimento deseja operar?\n\n");
    printf("(1)-> Verificar relatorio financeiro\n");
    printf("(2)-> Upload no acervo\n");
    printf("(3)-> Manusear contas");
    line_end();
}

int main()
{
    ADM();
}
