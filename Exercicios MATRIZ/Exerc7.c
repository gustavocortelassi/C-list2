
// Leia uma matriz 5 x 5. Leia também um valor X. O programa deverá
// fazer uma busca desse valor na matriz e, ao final, escrever a
// localização (linha e coluna) ou uma mensagem de “não encontrado”.

#include <stdio.h>
#include <time.h>

int main()
{
    float mat[5][5], x;
    int i, j, flag = 0;
    
    srand(time(NULL)); // zera o clock do processador

    for (i = 0; i < 5; i++){ // linha
        for (j = 0; j < 5; j++){  // coluna
            mat[i][j] = rand() % 99; // numeros randomicos
        }
    }
    
    for (i = 0; i < 5; i++){ // linha
        for (j = 0; j < 5; j++){ // coluna
            printf("%.0f  ", mat[i][j]);
        }
        printf("\n");
    }

    printf("Qual numero deseja procurar\n");
    scanf("%f", &x);

    for (i = 0; i < 5; i++){ // linha
        for (j = 0; j < 5; j++){ // coluna
            if (mat[i][j] == x){
                printf("Numero localizado linha %i, coluna %i\n", i, j);
                flag = 1;
            }
        }
    }

    if (flag == 0){
        printf("Numero nao localizado.\n");
    }
}