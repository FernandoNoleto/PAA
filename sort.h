#ifndef H_SORT_H
#define H_SORT_H

//Imprimir vetor
void imprimirVetor(int vetor[], int n);

//Bubble sort
int* bubble_sort (int vetor[], int n, int* trocas);

//Insertion sort
int* insertion_sort(int vetor[], int n, int* trocas);

//Selection sort
int* selection_sort(int vetor[], int n, int* trocas);

//Função auxiliar merge
int* merge(int vetor[], int comeco, int meio, int fim, int* trocas);

//Merge Sort
int* merge_sort(int vetor[], int comeco, int fim, int* trocas);

//Quick sort
int* quick_sort(int vetor[], int inicio, int fim, int* trocas);

//Selection sort para ordenar em ordem decrescente
int* selection_sort_inverso(int vetor[], int n);

#endif