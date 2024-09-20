#include <stdio.h>
 
int main() {
    struct dados{
    char titulo[100];
    char nome[50];
    char sobrenome[50];
    int dia;
    int mes;
    int ano;
    }typedef dados;
    dados pessoal;
    scanf(" %[^\n] %s %s %d %d %d", pessoal.titulo, pessoal.nome, pessoal.sobrenome, &pessoal.dia, &pessoal.mes, &pessoal.ano);
    printf("Título: %s", pessoal.titulo);
    printf("\nAutor: %s %s", pessoal.nome, pessoal.sobrenome);
    printf("\nData de Publicação: %d/%02d/%d", pessoal.dia, pessoal.mes, pessoal.ano);
    printf("\n");
    return 0;
}