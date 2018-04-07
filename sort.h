#ifndef H_SORT_H
#define H_SORT_H

//Imprimir vetor
void imprimirVetor(int vetor[], int n);

//Bubble sort
int* bubble_sort (int vetor[], int n);

//Insertion sort
int* insertion_sort(int vetor[], int n);

//Selection sort
int* selection_sort(int vetor[], int n);

//Função auxiliar merge
int* merge(int vetor[], int comeco, int meio, int fim);

//Merge Sort
int* merge_sort(int vetor[], int comeco, int fim);


#endif