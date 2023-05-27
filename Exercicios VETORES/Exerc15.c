#include <stdio.h>

int main(){
    int n1[10], n2[10], n3[10], very = 0, cont = 0, in3 = 0;
    for (int i = 0; i < 10; i++){
        printf("->");
        scanf("%i", &n1[i]);
    }
    printf("------------\n");
    for (int i = 0; i < 10; i++){
        printf("->");
        scanf("%i", &n2[i]);
    }

    for (int i1 = 0; i1 < 10; i1++){
        very = 0;
        for (int i2 = 0; i2 < cont; i2++){
            if (n3[i2] == n1[i1]){
                very = 1;
                break;
            }
        }
         
        for (int j = 0; j < 10; j++){
            if(n1[i1] == n2[j] && very != 1){
                n3[in3] = n1[i1];
                cont++;
                in3++;
                break;
            }else{
                n3[i1] = 0;
            } 
        }
    }
    for (int i = 0; i < 10; i++){
        printf("%i\n", n3[i]);
    }   
}

#include<stdio.h>
#include<time.h>
//Faça um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a
//intersecção entre os 2 vetores anteriores, ou seja, que contém apenas os números
//que estão em ambos os vetores. Não deve conter números repetidos.
int main(){
    int vet1[10], vet2[10], i,j,k=0, m=0,cont, igual[10];
    srand(time(NULL));
    printf("Informe 10 valores para vetor 1\n");
    for(i=0; i<10;i++){
        vet1[i]= 1+rand()%15;
        igual[i]=0;
    }
    printf("Informe 10 valores para vetor 2\n");
    for(i=0; i<10;i++){
        vet2[i]= 1+rand()%15;
    }
    printf("vetor 1\n");
    for(i=0; i<10;i++){
        printf("%5d",vet1[i]);
    }
    printf("\nvetor 2\n");
    for(i=0; i<10;i++){
        printf("%5d",vet2[i]);
    }
    for(i=0;i<10;i++){
        cont=0;
        for(j=0;j<10;j++){
            if(vet1[i]==vet2[j]){
                for(m=0;m<=k;m++){
                    if(igual[m]==vet1[i]){
                        cont++;
                    }
                }
                if(cont==0){
                    igual[k]=vet1[i];
                    k++;
                    break;
                }
            }
        }
    }
    printf("\nigual\n");
    for(i=0; i<10;i++){
        printf("%5d",igual[i]);
    }
}