#include <stdio.h>
 
int main() {
    struct dados{
        char nome[50];
        int idade;
        float pessoa;
    } typedef dados;
    
    struct dados pessoal;
    scanf("%s %d %f", pessoal.nome, &pessoal.idade, &pessoal.pessoa);
    printf("Nome: %s\n", pessoal.nome);
    printf("Idade: %d\n", pessoal.idade);
    printf("Altura: %.2f\n", pessoal.pessoa);
    return 0;
}