#include <cs50.h>
#include <stdio.h>
#include <string.h>


// Número Máximo de Candidatos;
#define MAX 9


// Nome e votos dos Candidatos;
typedef struct
{
    string name;
    int votes;
}
candidate;


// ARRAY dos Candidatos; 
candidate candidates[MAX];

// Contagem de Candidatos;
int candidate_count;

// Funções;
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])

{
    if (argc < 2)
    {
        printf("Usage: ./plurality [candidate ...]\n");  // não permite aceitar 0 ou 1 canditado(s);
        return 1;
    }
    
// População ARRAY dos candidatos
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("São permitidos no máximo %i candidatos.\n", MAX);  // não permite aceitar o número mais que o máximo de candidatos;
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1]; // lembrando que argv[0] = ./plurality
        candidates[i].votes = 0;
    }

int voter_count = get_int("Number of Voters: ");

// Loop de voto para os eleitores; 

for (int i = 0; i < voter_count; i++)
    {
    string name = get_string("Vote: ");
    
// Para votos inválidos;
    if (!vote (name))                        // se for diferente da função "vote";
      {
        printf("Invalid vote.\n");
      }
    }

// O(s) ganhador(es) da eleição;
print_winner();

}

// Função 1 - Atualização de votos;

bool vote (string name)
{
    for (int i = 0; i < candidate_count; i++)
    {
        if (strcmp(name, candidates[i].name) == 0) // comparação de strings (módulo 3)  || associando o nome do voto ao ARRAY criado;
        {
            candidates[i].votes++;
            return true;
        }
    }
    
    return false;
}


// Função 2 - Mostrar o(s) vencedor(es);

void print_winner(void)
{
    int maxvotes = 0;
    
    for (int i = 0; i < candidate_count; i++)
    {
        if (maxvotes < candidates[i].votes)
        {
            maxvotes = candidates[i].votes;
        }
    }
    
    for (int i = 0; i < candidate_count; i++)
    {
        if (maxvotes == candidates[i].votes)
        {
            printf("O vencedor é: %s.\n", candidates[i].name);
        }
    }
    
    return; 
}
