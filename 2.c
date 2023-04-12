#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int U[3][7], a, maxI, max;
    for (int i = 0;i<3;i++){
        for (int j = 0;j<7;j++){
            U[i][j] = rand()%20;
        }
    }
    printf("Matrucya:\n");
    for (int i = 0;i<3;i++){
        for (int j = 0;j<7;j++){
            printf("%d\t", U[i][j]);
        }
        printf("\n");
    }
    for (int j = 0;j<7;j++){
        max = U[0][j];
        maxI = 0;
        for (int i = 1;i<3;i++){
            if (U[i][j] > max){
                max = U[i][j];
                maxI = i;
            }
        }
        a = U[0][j];
        U[0][j] = U[maxI][j];
        U[maxI][j] = a;
    }
    printf("Zminena matrucya:\n");
    for (int i = 0;i<3;i++){
        for (int j = 0;j<7;j++){
            printf("%d\t", U[i][j]);
        }
        printf("\n");
    }
    return 0;
}