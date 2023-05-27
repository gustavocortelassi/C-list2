#include <stdio.h>

int main()
{

    int cont;

    cont = 0;

    while (cont <= 50){
        if (cont % 2 == 0){
            printf("%i\n", cont);
        }
        cont += 1;
    }
}