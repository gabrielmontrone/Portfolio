#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


// Obter o texto do usuário;
// Fazer a contagem de letras, palavras e sentenças (palavras: separação de espaço e sentenças: . / ? / !);
// Aplicar na formula -- 0,0588 * L - 0,296 * S - 15,8 -- Aqui, L é o número médio de letras por 100 palavras no texto e S é o número médio de sentenças por 100 palavras no texto;
// Imprimir Grade X, no qual X é o número do índice acima;
// x < 1 - "Before Grade 1" / x > 16 - "Grade 16+". 


int main (void)
{
    string texto = get_string("Texto: ");
    
    int a = strlen (texto); // strlen -> conta os caracteres do texto
    int letras = 0;
    int palavras = 0;
    int sentenças = 0;
    
    // Loop para a contagem
    
    for (int x = 0; x < a; x++)
    {
        // Contagem das letras;
        
        char c = texto[x]; // o 'c' adere o texto de "x"
        
        if (isalpha(c) != 0) // isalpha -> verifica se o caractere é alfabeto ou não | (!= significa diferente)
        
        {
            letras++;
        }
        
        // Contagem das palavras; 
        
        if (c == ' ')
        
        {
            palavras++;
        }
        
        // Contagem das sentanças;
        
        if (c == '.' || c == '!' || c == '?')
        
        {
            sentenças++;
        }
        
    }
    
    // Para contar a última palavra;
       
       palavras = palavras + 1;
    
    // Calcular;
    
    float L = ((float) letras / (float) palavras) * 100;
    float S = ((float) sentenças / (float) palavras) * 100; 
    float subindice = 0.0588 * L - 0.296 * S - 15.8;
    int indice = round (subindice);
    
    if (indice < 0)
    {
        printf("Before Grade 1\n");
    }
    
    if (indice > 16)
    {
        printf("Grade 16+\n");
    }
    
    else 
    {
        printf("Grade %i\n", indice);
    }
    
}
