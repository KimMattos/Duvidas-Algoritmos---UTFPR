#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(void){
    int NumeroMaisRepetido = 0, maiorFrequencia=0, numeroFrequente=0, frequencia = 0, i=0, j=0, vetor[10]={2, 3, 2, 4, 2, 5, 2, 2, 5, 5};
    srand(time(NULL));
    printf("==== VETOR ==== [%d]\n", vetor[0]);
    for(i=0;i<10;i++)
    {
        //vetor[i]=rand()%5+1;
        printf("%d ", vetor[i]);
    }

    for(i=0;i<10;i++)
    {
        //frequencia = 0;
        for(j=0;j<10;j++)
        {
            i f(vetor[j]==vetor[i])
            {
                frequencia++;
                maiorFrequencia++;
                if(maiorFrequencia>frequencia)
                {
                    frequencia = maiorFrequencia;
                }
                numeroFrequente = vetor[j];
            }
            printf("\nfrequencia [%d] maiorFrequencia [%d]", frequencia, maiorFrequencia);
        }
        if(maiorFrequencia > frequencia)
        {
            NumeroMaisRepetido = numeroFrequente;
        }
        printf(" numero frequente [%d]", numeroFrequente);
        printf(" numero mais repetido [%d]", NumeroMaisRepetido);
        frequencia = 0;

    }
    printf("\n\nMaior ocorrencia no vetor: %d\n", NumeroMaisRepetido);




return 0;
}
