#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int n = 0;
    int L[7][7], A[n];
    for (int i = 0;i<7;i++){
        for (int j = 0;j<7;j++){
            L[i][j] = rand()%20 - 10;
        }
    }
    printf("Matrucya:\n");
    for (int i = 0;i<7;i++){
        for (int j = 0;j<7;j++){
            printf("%d\t", L[i][j]);
        }
        printf("\n");
    }
    for (int i = 0;i<7;i++){
        for (int j = 0;j<7-i;j++){
            A[n++] = L[i][j];
        }
    }
    printf("Massiv:\n");
    for (int i = 0;i<n;i++){
        printf("%d ", A[i]);
    }
    return 0;
}