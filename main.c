#include <stdlib.h>
#include <stdio.h>
#include <time.h>
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

void imprimir_graficos(int ord){
    switch(ord){
        case 1:
            system("gnuplot4 -p scripts/crescente.gp");
            break;
        case 2:
            system("gnuplot4 -p scripts/random.gp");
            break;
        case 3:
            system("gnuplot4 -p scripts/decrescente.gp");
            break;
        default:
            break;
    }
    
}


void menu(int opcao, int ord){

    int TAM = 0;
    printf("Tamanho do vetor:. ");
    scanf("%d", &TAM);
    puts("");

    //Medir tempo de execução
    clock_t inicio;
    clock_t fim;

    srand(time(NULL));

    int vetor_random[TAM];
    int* vetor_ordenado;
    int* vetor_inverso;
    unsigned int trocas = 0;

    //Populando o vetor com valores aleatórios
    for(int i = 0; i < TAM; i++){
        vetor_random[i] = rand() % 10000;
    }

    //ord = crescente
    if(ord == 1){
        vetor_ordenado = quick_sort(vetor_random, 0, TAM-1, &trocas);
    }
    
    //ord = decrescente
    if(ord == 3){
        vetor_inverso = selection_sort_inverso(vetor_random, TAM);
    }

    //imprimindo antes de ordenar
    //imprimirVetor(vetor, TAM);

    int* vetor_final;

    inicio = clock();

    //1 - crescente
    //2 - random
    //3 - decrescente
    switch(opcao){
        case 1:
            if(ord == 1){
                vetor_final = bubble_sort(vetor_ordenado, TAM, &trocas);
            }
            if(ord == 2){
                vetor_final = bubble_sort(vetor_random, TAM, &trocas);
            }
            if(ord == 3){
                vetor_final = bubble_sort(vetor_inverso, TAM, &trocas);
            }
            puts("\nBubble sort:");
            break;
        case 2:
            if(ord == 1){
                vetor_final = insertion_sort(vetor_ordenado, TAM, &trocas);
            }
            if(ord == 2){
                vetor_final = insertion_sort(vetor_random, TAM, &trocas);
            }
            if(ord == 3){
                vetor_final = insertion_sort(vetor_inverso, TAM, &trocas);
            }
            puts("\nInsertion sort:");
            break;
        case 3:
            if(ord == 1){
                vetor_final = selection_sort(vetor_ordenado, TAM, &trocas);
            }
            if(ord == 2){
                vetor_final = selection_sort(vetor_random, TAM, &trocas);
            }
            if(ord == 3){
                vetor_final = selection_sort(vetor_inverso, TAM, &trocas);
            }
            puts("\nSelection sort:");
            break;
        case 4:
            if(ord == 1){
                vetor_final = merge_sort(vetor_ordenado, 0, TAM-1, &trocas);
            }
            if(ord == 2){
                vetor_final = merge_sort(vetor_random, 0, TAM-1, &trocas);
            }
            if(ord == 3){
                vetor_final = merge_sort(vetor_inverso, 0, TAM-1, &trocas);
            }
            puts("\nMerge sort:");
            break;
        case 5:
            if(ord == 1){
                vetor_final = quick_sort(vetor_ordenado, 0, TAM-1, &trocas);
            }
            if(ord == 2){
                vetor_final = quick_sort(vetor_random, 0, TAM-1, &trocas);
            }
            if(ord == 3){
                vetor_final = quick_sort(vetor_inverso, 0, TAM-1, &trocas);
            }
            puts("\nQuick sort:");
            break;
        case 6:
            imprimir_graficos(ord);
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
    printf("%d trocas efetudas\n", trocas);
    puts("\nPressione qualquer tecla para continuar!\n");
    getchar();
    getchar();

    //imprimindo depois de ordenar
    //imprimirVetor(vetor_ordenado, TAM);

}


int main(){

    clear();
    
    int opc = 0;
    int ord = 0;
    
    do{
        //clear();
        puts("TIPO DE ORDENACAO: 0 - SAIR | 1 - CRESCENTE | 2 - RANDOM | 3 - DECRESCENTE");
        scanf("%d", &ord);
        
        if (ord == 0){
            puts("FLW!");
            break;
        }
        
        puts("0 - SAIR | 1 - BUBBLE SORT | 2 - INSERTION SORT | 3 - SELECTION SORT | 4 - MERGE SORT | 5 - QUICK SORT | 6 - IMPRIMIR GRAFICOS");
        scanf("%d", &opc);


        switch(opc){
            case 0:
                clear();
                puts("FLW!");
                break;
            case 1:
                clear();
                menu(opc, ord);
                break;
            case 2:
                clear();
                menu(opc, ord);
                break;
            case 3:
                clear();
                menu(opc, ord);
                break;
            case 4:
                clear();
                menu(opc, ord);
                break;
            case 5:
                clear();
                menu(opc, ord);
                break;
            case 6:
                clear();
                imprimir_graficos(ord);
                break;
            default:
                puts("Opção inválida");
                break;
        }
    }while(opc != 0);

}
