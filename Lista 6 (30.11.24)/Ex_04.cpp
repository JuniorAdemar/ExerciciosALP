/*Escreva um algoritmo que preenche uma matriz 4x6 com valores inteiros aleatórios entre -10 e
10. Calcule as somas:
a. dos elementos da segunda linha
b. dos elementos da quinta coluna
c. da multiplicação dos elementos da primeira linha pelos elementos da quarta linha
d. dos elementos só das colunas com índices pares
e. dos elementos só das linhas com índices ímpares*/
#include <iostream>
#include <time.h>

#define ROWS 4
#define COLUMNS 6

int main() {
    int matriz[ROWS][COLUMNS];
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    srand(time(0));


    for(int i=0; i<ROWS; i++){
       for(int j=0; j<COLUMNS; j++){
        matriz[i][j] = (rand()%(20+1))-10;
       }
    }

    std::cout<<"A matriz eh: "<<std::endl;

    for(int i=0; i<ROWS; i++){
        for(int j=0; j<COLUMNS; j++){
            if(i == 1){
                a += matriz[i][j]; 
            }
            if(j == 4){
                b += matriz[i][j];
            }
            if(i == 0){
                c += (matriz[i][j]*matriz[3][j]);
            }
            if((j%2) == 0){
                d += matriz[i][j];
            }
            if(i%2){
                e += matriz[i][j];
            }

            std::cout<<matriz[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    std::cout<<a<<": soma dos elementos da segunda linha"<<std::endl;
    std::cout<<b<<": soma dos elementos da quinta coluna"<<std::endl;
    std::cout<<c<<": soma da multiplicacao dos elementos da primeira linha pelos elementos da quarta linha"<<std::endl;
    std::cout<<d<<": soma dos elementos so das colunas com indices pares"<<std::endl;
    std::cout<<e<<": soma dos elementos so das linhas com indices impares"<<std::endl;




    return 0;
}