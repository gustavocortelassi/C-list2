// Construa uma estrutura aluno com nome, número de matrícula e curso. Leia do 
// usuário a informação de 5 alunos, armazene em vetor dessa estrutura e imprima os 
// dados na tela

#include <stdio.h>

int main(){

    int i;

    struct dadosAluno{
       int matricula;
       char nome[100];
       char curso[100];
    }aluno[5];
    // struct dadosAluno aluno[5];

    for (i = 0; i < 5; i++){
        printf("Informe nome:\n");
        gets(aluno[i].nome);
        fflush(stdin); // sem nicho de memoria

        printf("Informe matricula:\n");
        scanf("%i", &aluno[i].matricula);
        fflush(stdin);

        printf("Informe curso:\n");
        gets(aluno[i].curso);
        fflush(stdin);
    }

    for (i = 0; i < 5; i++){
        printf("Nome %s, Matricula %i, Curso %s\n", aluno[i].nome, aluno[i].matricula, aluno[i].curso);
    }
    
}