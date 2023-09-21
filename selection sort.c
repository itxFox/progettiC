#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    ///Leggere in ingresso 20 numeri casuali da 1 a 100, ordinarli in modo crescente secondo il metodo selection sort, quindi stampare l'array originale e quello ordinato
    int array[20], c, c2=0, i,n,temp, min=500;
    srand(time(NULL));
    printf("\n\narray originale\n");
    for(c=0; c<20; c++)
    {
        n=rand()%100+1;
        array[c]=n;
        printf("array posizione %d, numero: %d\n", c+1, array[c]);
    }
    printf("\n\n");

    for(i=0; i<20; i++)
    {
        for(c=c2; c<20; c++)  ///esamino array
        {
            if(array[c]<min)
            {
                min=array[c];
            }
        }
        c2++;
        temp=array[i];
        array[i]=min;   ///imposto l'indice con valore minimo come indice del primo

        min=array[i+1];
        min=500;
    }
    printf("\n\narray ordinato\n");
    for(c=0; c<20; c++)
    {

        printf("array posizione %d, numero: %d\n", c+1, array[c]);
    }

}
