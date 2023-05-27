// Construa uma estrutura aluno com nome, número de matrícula e curso. Leia do 
// usuário a informação de 5 alunos, armazene em vetor dessa estrutura e imprima os 
// dados na tela

#include <stdio.h>

int main(){

    int i;

    struct data{
        int dia, mes, ano;
    };

    typedef struct data d; // define que o nome "struct data" se chamara apenas "d"
                           // typedef muda os nomes das coisas para outras

    struct dadosAluno{
       int matricula;
       char nome[100];
       char curso[100];
       d matr;
       d colacao;
       d nasc;

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

        printf("Informe data da matricula:\n");
        scanf("%i", aluno[i].matr.dia);
        scanf("%i", aluno[i].matr.mes);
        scanf("%i", aluno[i].matr.ano);
        fflush(stdin);

        printf("Informe data do nascimento:\n");
        scanf("%i", aluno[i].nasc.dia);
        scanf("%i", aluno[i].nasc.mes);
        scanf("%i", aluno[i].nasc.ano);
        fflush(stdin);
    }

    for (i = 0; i < 5; i++){
        printf("Nome %s, Matricula %i, Curso %s\n", aluno[i].nome, aluno[i].matricula, aluno[i].curso);
    }
    
    
}

// #include<stdio.h>
// #include<time.h>
// //Construa uma estrutura aluno com nome, número de matrícula e curso.
// //Leia do usuário a informação de 5 alunos, armazene em vetor dessa
// //estrutura e imprima os dados na tela.
// int main(){
//     struct data{
//         int dia, mes, ano;
//     };

//     typedef struct data d;

//     struct dados{
//         int matricula;
//         char nome[20];
//         char curso[15];
//         d mat;
//         d colacao;
//         d nasc;
//     }aluno[5];
//     int i;
//     //struct dados aluno[5];
//     for(i=0;i<3;i++){
//         printf("Informe nome:\n");
//         gets(aluno[i].nome);
//         fflush(stdin);
//         printf("Informe matricula\n");
//         scanf("%i",&aluno[i].matricula);
//         fflush(stdin);
//         printf("Informe o curso\n");
//         gets(aluno[i].curso);
//         fflush(stdin);
//         printf("Informe dia / mes / ano matricula\n");
//         scanf("%i",&aluno[i].mat.dia);
//         scanf("%i",&aluno[i].mat.mes);
//         scanf("%i",&aluno[i].mat.ano);
//         printf("Informe dia / mes / ano nascimento\n");
//         scanf("%i%i%i",&aluno[i].nasc.dia,&aluno[i].nasc.mes,&aluno[i].nasc.ano);
//         fflush(stdin);
//     }
//     for(i=0;i<3;i++){
//         printf("Nome %s, matricula %i, Curso %s\n", aluno[i].nome,aluno[i].matricula,aluno[i].curso);
//         printf("Nascimento %i/%i/%i\n",aluno[i].nasc.dia,aluno[i].nasc.mes,aluno[i].nasc.ano);
//     }
// }