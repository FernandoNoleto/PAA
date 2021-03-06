#include <stdio.h>
#include <stdlib.h>
#include "sort.h"


//Imprimir vetor
void imprimirVetor(int vetor[], int n) {
    for (int i=0; i < n; i++)
        printf("| %d", vetor[i]);
    puts("");
}

//bubble sort
int* bubble_sort (int vetor[], int n, unsigned int* trocas) {
    int k, j, aux;
    for (k = 1; k < n; k++) {
        for (j = 0; j < n - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                *trocas+=1;
                vetor[j + 1] = aux;
            }
        }
    }
    return vetor;
}

//insertion sort
int* insertion_sort(int vetor[], int n, unsigned int* trocas) {
    int i, chave, j;
    for (i = 1; i < n; i++){
        chave = vetor[i];
        j = i-1;

        while (j >= 0 && vetor[j] > chave){
            vetor[j+1] = vetor[j];
            *trocas+=1;
            j = j-1;
        }
        vetor[j+1] = chave;
        *trocas+=1;
    }

    return vetor;
}

//selection sort
int* selection_sort(int vetor[], int n, unsigned int* trocas) { 
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
            *trocas+=1;
            vetor[min] = aux;
        }
    }
    return vetor;
}

//Função auxiliar merge

int* merge(int vetor[], int comeco, int meio, int fim, unsigned int* trocas) {
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
        *trocas+=1;
    }
    
    free(vetAux);

    return vetor;
}

//Merge Sort
int* merge_sort(int vetor[], int comeco, int fim, unsigned int* trocas){
    int* v;
    if (comeco < fim) {
        int meio = (fim+comeco)/2;

        merge_sort(vetor, comeco, meio, trocas);
        merge_sort(vetor, meio+1, fim, trocas);
        v = merge(vetor, comeco, meio, fim, trocas);
    }
    return v;
}

//Quick sort
int* quick_sort(int vetor[], int inicio, int fim, unsigned int* trocas) {
	int i, j, pivo, aux;
	i = inicio;
	j = fim-1;
	pivo = vetor[(inicio + fim) / 2];
	while(i <= j){
		while(vetor[i] < pivo && i < fim){
			i++;
		}
		while(vetor[j] > pivo && j > inicio){
			j--;
		}
		if(i <= j){
			aux = vetor[i];
			vetor[i] = vetor[j];
            *trocas+=1;
			vetor[j] = aux;
			i++;
			j--;
		}
	}
	if(j > inicio)
		quick_sort(vetor, inicio, j+1, trocas);
	if(i < fim)
		quick_sort(vetor, i, fim, trocas);

    return vetor;
}

//selection sort_inverso
int* selection_sort_inverso(int vetor[], int n) { 
    int min, aux;
    for (int i = 0; i < (n-1); i++) {
        min = i;
        for (int j = (i+1); j < n; j++) {
            if(vetor[j] > vetor[min]) 
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
