#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
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

<<<<<<< HEAD

void menu(int opcao, int ord){
=======
void menu(int opcao){
>>>>>>> 3223315ae8413a0033563f7f3216776418411393

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

    //Populando o vetor com valores aleatórios
    for(int i = 0; i < TAM; i++){
        vetor_random[i] = rand() % 10000;
    }

    //ord = crescente
    if(ord == 1){
        vetor_ordenado = quick_sort(vetor_random, 0, TAM-1);
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
                vetor_final = bubble_sort(vetor_ordenado, TAM);
            }
            if(ord == 2){
                vetor_final = bubble_sort(vetor_random, TAM);
            }
            if(ord == 3){
                vetor_final = bubble_sort(vetor_inverso, TAM);
            }
            puts("\nBubble sort:");
            break;
        case 2:
            if(ord == 1){
                vetor_final = insertion_sort(vetor_ordenado, TAM);
            }
            if(ord == 2){
                vetor_final = insertion_sort(vetor_random, TAM);
            }
            if(ord == 3){
                vetor_final = insertion_sort(vetor_inverso, TAM);
            }
            puts("\nInsertion sort:");
            break;
        case 3:
            if(ord == 1){
                vetor_final = selection_sort(vetor_ordenado, TAM);
            }
            if(ord == 2){
                vetor_final = selection_sort(vetor_random, TAM);
            }
            if(ord == 3){
                vetor_final = selection_sort(vetor_inverso, TAM);
            }
            puts("\nSelection sort:");
            break;
        case 4:
            if(ord == 1){
                vetor_final = merge_sort(vetor_ordenado, 0, TAM-1);
            }
            if(ord == 2){
                vetor_final = merge_sort(vetor_random, 0, TAM-1);
            }
            if(ord == 3){
                vetor_final = merge_sort(vetor_inverso, 0, TAM-1);
            }
            puts("\nMerge sort:");
            break;
        case 5:
            if(ord == 1){
                vetor_final = quick_sort(vetor_ordenado, 0, TAM-1);
            }
            if(ord == 2){
                vetor_final = quick_sort(vetor_random, 0, TAM-1);
            }
            if(ord == 3){
                vetor_final = quick_sort(vetor_inverso, 0, TAM-1);
            }
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
    puts("\nPressione qualquer tecla para continuar!\n");
    getch();

    //system()
    //imprimindo depois de ordenar
    //imprimirVetor(vetor_ordenado, TAM);

}


int main(){

<<<<<<< HEAD
=======
    //system("clear");
>>>>>>> 3223315ae8413a0033563f7f3216776418411393
    clear();
    
    int opc = 0;
    int ord = 0;
    
    do{
<<<<<<< HEAD
        //clear();
        puts("TIPO DE ORDENACAO: 0 - SAIR | 1 - CRESCENTE | 2 - RANDOM | 3 - DECRESCENTE");
        scanf("%d", &ord);
        
        if (ord == 0){
            puts("FLW!");
            break;
        }
        
=======
>>>>>>> 3223315ae8413a0033563f7f3216776418411393
        puts("0 - SAIR | 1 - BUBBLE SORT | 2 - INSERTION SORT | 3 - SELECTION SORT | 4 - MERGE SORT | 5 - QUICK SORT");
        scanf("%d", &opc);


        switch(opc){
            case 0:
<<<<<<< HEAD
=======
                //system("clear");
>>>>>>> 3223315ae8413a0033563f7f3216776418411393
                clear();
                puts("FLW!");
                break;
            case 1:
<<<<<<< HEAD
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
=======
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
>>>>>>> 3223315ae8413a0033563f7f3216776418411393
                break;
            default:
                puts("Opção inválida");
                break;
        }
    }while(opc != 0);

}
