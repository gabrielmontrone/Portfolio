#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void cipher_text(string texto, int chave);

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        //checando se argv[1] é um dígito positivo
        for (int i = 0; i < strlen(argv[1]); i++)
       {
            if (isdigit(argv[1][i]) == false)
            {
                printf("Use: ./caesar chave\n");
                return 1;
            }
        }

        //convertendo argv[1] em int
        int key = atoi(argv[1]);

        printf("Successo\n" "%d\n", key);

        string plaintext = get_string("Texto: ");

        printf("Texto Criptografado: ");

        //encipher
        //output ciphertext
        cipher_text(plaintext, key);
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    printf("\n");
}

void cipher_text(string texto, int chave)
{
    for (int i = 0; i < strlen(texto); i++)
    {
        if (texto[i] >= 'a' && texto[i] <= 'z')
        {
            printf("%c", ((texto[i] - 'a' + chave) % 26) + 'a');
        }

        if (texto[i] >= 'A' && texto[i] <= 'Z')
        {
            printf("%c", ((texto[i] - 'A' + chave) % 26) + 'A');
        }

        else if (isalpha(texto[i]) == false)
        {
            printf("%c", texto[i]);
        }

    }
}
