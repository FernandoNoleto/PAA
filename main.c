#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "sort.h"

//#define TAM 100

void clear(){
    #ifdef LINUX
    system("clear");
    #elif WIN32
    system("cls");
    #else
    system("clear");
    #endif
}

void menu(int opcao){

    int TAM = 0;
    printf("Tamanho do vetor:. ");
    scanf("%d", &TAM);
    puts("");

    //Medir tempo de execução
    clock_t inicio;
    clock_t fim;

    srand(time(NULL));

    int vetor[TAM];

    //Populando o vetor
    for(int i = 0; i < TAM; i++){
        vetor[i] = rand() % 10000;
    }

    //imprimindo antes de ordenar
    //imprimirVetor(vetor, TAM);

    int* vetor_ordenado;

    inicio = clock();

    switch(opcao){
        case 1:
            vetor_ordenado = bubble_sort(vetor, TAM);
            puts("\nBubble sort:");
            break;
        case 2:
            vetor_ordenado = insertion_sort(vetor, TAM);
            puts("\nInsertion sort:");
            break;
        case 3:
            vetor_ordenado = selection_sort(vetor, TAM);
            puts("\nSelection sort:");
            break;
        case 4:
            vetor_ordenado = merge_sort(vetor, 0, TAM-1);
            puts("\nMerge sort:");
            break;
        case 5:
            vetor_ordenado = quick_sort(vetor, 0, TAM-1);
            puts("\nQuick sort:");
            break;
        default:
            puts("Opção inválida");
            break;
    }

    //Medir tempo de execução
    fim = clock();
    double tempo = (fim - inicio) * 1000.0 / CLOCKS_PER_SEC;
    printf("Tempo gasto: %.3f ms.\n", tempo);
    printf("Tempo gasto: %.3f s.\n", tempo/1000);
    puts("\n");

    //imprimindo depois de ordenar
    //imprimirVetor(vetor_ordenado, TAM);

}


int main(){

    //system("clear");
    clear();
    
    int opc = 0;
    
    do{
        puts("0 - SAIR | 1 - BUBBLE SORT | 2 - INSERTION SORT | 3 - SELECTION SORT | 4 - MERGE SORT | 5 - QUICK SORT");
        scanf("%d", &opc);

        switch(opc){
            case 0:
                //system("clear");
                clear();
                puts("FLW!");
                break;
            case 1:
                //system("clear");
                clear();
                menu(opc);
                break;
            case 2:
                //system("clear");
                clear();
                menu(opc);
                break;
            case 3:
                //system("clear");
                clear();
                menu(opc);
                break;
            case 4:
                //system("clear");
                clear();
                menu(opc);
                break;
            case 5:
                //system("clear");
                clear();
                menu(opc);
                break;
            default:
                puts("Opção inválida");
                break;
        }
    }while(opc != 0);

}