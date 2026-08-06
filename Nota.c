char materia[50];
float nota1;
float nota2;
float nota3;
float nota4;
float media;
char nome[50]; 

main() {
    printf("Digite o nome do aluno: ");
    scanf(" %49[^\n]", nome);
    
    printf("Digite a materia do aluno: ");
    scanf(" %49[^\n]", materia);

    printf("Digite a nota do aluno em %s no primeiro bimestre: ", materia);
    scanf("%f", &nota1);

    printf("Digite a nota do aluno em %s no segundo bimestre: ", materia);
    scanf("%f", &nota2);

    printf("Digite a nota do aluno em %s no terceiro bimestre: ", materia);
    scanf("%f", &nota3);

    printf("Digite a nota do aluno em %s no quarto bimestre: ", materia);
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("A media do aluno %s em %s e: %.2f\n", nome, materia, media);
    
    if (media >= 6) {
        printf("O aluno %s foi aprovado!\n", nome);
    } else {
        printf("O aluno %s foi reprovado!\n", nome);
    }
    
    return 0;
}