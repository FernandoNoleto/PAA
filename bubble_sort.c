#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 100000

//Imprimir vetor
void imprimirVetor(int vetor[], int n) {
    for (int i=0; i < n; i++)
        printf("| %d", vetor[i]);
    puts("");
}

//bubble sort
int* bubble_sort (int vetor[], int n) {
    int k, j, aux;
    for (k = 1; k < n; k++) {
        for (j = 0; j < n - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
    return vetor;
}

//insertion sort
int* insertionSort(int vetor[], int n) {
    int i, chave, j;
    for (i = 1; i < n; i++){
        chave = vetor[i];
        j = i-1;
 
        /* Move elements of vetor[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && vetor[j] > chave){
            vetor[j+1] = vetor[j];
            j = j-1;
        }
        vetor[j+1] = chave;
    }

    return vetor;
}

int* selection_sort(int vetor[], int n) { 
    int min, aux;
    for (int i = 0; i < (n-1); i++) {
        min = i;
        for (int j = (i+1); j < n; j++) {
            if(vetor[j] < vetor[min]) 
            min = j;
        }
        if (vetor[i] != vetor[min]) {
            aux = vetor[i];
            vetor[i] = vetor[min];
            vetor[min] = aux;
        }
    }
    return vetor;
}
 

int main(){

    //Medir tempo de execução
    clock_t Ticks[2];

    srand(time(NULL));

    int vetor[TAM];

    //Populando o vetor
    for(int i = 0; i < TAM; i++){
        vetor[i] = rand() % 10000;
    }

    //imprimindo antes de ordenar
    imprimirVetor(vetor, TAM);

    Ticks[0] = clock();

    //ordenando o vetor com bubble_sort
    //int* vetor2 = bubble_sort(vetor, TAM);

    //ordenando o vetor com selection_sort
    int* vetor2 = selection_sort(vetor, TAM);

    //Medir tempo de execução
    Ticks[1] = clock();
    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
    printf("Tempo gasto: %.3f ms.\n", Tempo);
    printf("Tempo gasto: %.3f s.\n", Tempo/1000);

    //imprimindo depois de ordenar
    //imprimirVetor(vetor2, TAM);


    system("pause");

}