#include <iostream>
#include <time.h>
#define TAM 100000

using namespace std;

//Imprimir vetor
void imprimirVetor(int vetor[], int n) {
    for (int i=0; i < n; i++)
        cout << "|" << vetor[i];
    cout << endl;
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
 
        /* Move elements of arr[0..i-1], that are
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
    int* vetor2 = bubble_sort(vetor, TAM);

    //Medir tempo de execução
    Ticks[1] = clock();
    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
    cout << "Tempo gasto: " << Tempo << " ms." << endl;
    cout << "Tempo gasto: " << Tempo/1000 << " s." << endl;
    
    //imprimindo depois de ordenar
    //imprimirVetor(vetor2, TAM);


    system("pause");

}