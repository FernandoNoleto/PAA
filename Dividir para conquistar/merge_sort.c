#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#define TAM 10
#define RANGE 10


int* merge(int vetor[], int comeco, int meio, int fim);
int* merge_sort(int vetor[], int comeco, int fim);
void imprimirVetor(int vetor[], int n);
int* randomizar_vetor(int tam);

int main(){

    int* vetor = randomizar_vetor(TAM);
    imprimirVetor(vetor, TAM);
    int* v_ordenado = merge_sort(vetor, 0, TAM);
    imprimirVetor(v_ordenado, TAM);


    return 0;

}

//Função auxiliar merge

int* merge(int vetor[], int comeco, int meio, int fim) {
    int com1 = comeco, com2 = meio+1, comAux = 0, tam = fim-comeco+1;
    int *vetAux;
    vetAux = (int*)malloc(tam * sizeof(int));

    while(com1<=meio && com2<=fim){
        if(vetor[com1] <= vetor[com2]){
            vetAux[comAux] = vetor[com1];
            com1++;
        }else{
            vetAux[comAux] = vetor[com2];
            com2++;
        }
        comAux++;
    }

    while(com1<=meio){  //Caso ainda haja elementos na primeira metade
        vetAux[comAux] = vetor[com1];
        comAux++;
        com1++;
    }

    while(com2<=fim){   //Caso ainda haja elementos na segunda metade
        vetAux[comAux] = vetor[com2];
        comAux++;
        com2++;
    }

    for(comAux=comeco;comAux<=fim;comAux++){    //Move os elementos de volta para o vetor original
        vetor[comAux] = vetAux[comAux-comeco];
    }
    
    free(vetAux);

    return vetor;
}

//Merge Sort
int* merge_sort(int vetor[], int comeco, int fim){
    int* v;
    if (comeco < fim) {
        int meio = (fim+comeco)/2;

        merge_sort(vetor, comeco, meio);
        merge_sort(vetor, meio+1, fim);
        v = merge(vetor, comeco, meio, fim);
    }
    return v;
}

//Imprimir vetor
void imprimirVetor(int vetor[], int n) {
    for (int i=0; i < n; i++)
        printf("| %d", vetor[i]);
    puts("");
}

//Popular vetor com valores aleatórios
int* randomizar_vetor(int tam){
    int* vetor_random = (int*) malloc(tam* sizeof(int));
    srand(time(NULL));
    for(int i = 0; i < tam; i++){
        vetor_random[i] = rand() % RANGE;
    }
    return vetor_random;
}
