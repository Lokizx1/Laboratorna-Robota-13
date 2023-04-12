#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int B[4][4], A[4], sum = 0, p = 0;
    for (int i = 0;i<4;i++){
        for (int j = 0;j<4;j++){
            B[i][j] = rand()%20;
        }
    }
    for (int j = 0;j<4;j++){
        int min = B[0][j];
        for (int i = 1;i<4;i++){
            if (B[i][j] < min){
                min = B[i][j];
            }
        }
        A[j] = min;
    }
    for (int i = 0;i<4;i++){
        if (A[i] > 0){
            p++;
            sum += A[i];
        }
    }
    printf("Matrucya:\n");
    for (int i = 0;i<4;i++){
        for (int j = 0;j<4;j++){
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
    printf("Massiv:\n");
    for (int i = 0;i<4;i++){
        printf("%d ", A[i]);
    }
    printf("\n");
    printf("Suma: %d", sum);
    printf("\nKilkisty dodatnuh elementiv: %d", p);
    return 0;
}