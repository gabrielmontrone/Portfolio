#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int altura;
    do
{
    
    // Conseguir uma altura do usuário
    
    altura = get_int("Altura: ");
}

    // Condição para a altura
    
while (altura < 1 || altura > 8);

    // Agora construiremos a pirâmide

    // Vamos começar com os espaços da esquerda para direita:

  for (int k = altura; k >= 1; k--)
{
    for (int j = 0; j < k; j++)
    {
        printf(" ");
    }

    // Agora podemos construir os blocos da esquerda:

    for (int a = 0; a < (altura - (k - 1)); a++)

        {
            printf("#");
        }
        
    // Construindo o espaço entre as pirâmides:
        
        printf("  ");
        
    // Construindo a segunda pirâmide:
        
    for (int c = 0; c < (altura - (k - 1)); c++)
    {
        printf ("#");
    }
    
printf("\n");

}
}
