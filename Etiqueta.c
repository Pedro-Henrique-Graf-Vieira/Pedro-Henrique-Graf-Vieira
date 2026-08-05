#include <stdio.h>

char nome[50];
char endereco[100];
char cep[10];
char telefone[15];

int main(){
    printf("\nQual e o seu nome?\n");
    scanf(" %[^\n]", nome);
    printf("\nQual e o seu endereco?\n");
    scanf(" %[^\n]", endereco);
    printf("\nQual e o seu cep?\n");
    scanf(" %[^\n]", cep);
    printf("\nQual e o seu telefone?\n");
    scanf(" %[^\n]", telefone);
  
    printf("OS DADOS INFORMADOS SAO:\n");
    printf("Nome: %s\n", nome);
    printf("Endereco: %s\n", endereco); 
    printf("CEP: %s\n", cep);
    printf("Telefone: %s\n", telefone);

    return 0;
} 
