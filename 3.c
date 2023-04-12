#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int X[5][5], sum_dot = 0;
    for (int i = 0;i<5;i++){
        for (int j = 0;j<5;j++){
            X[i][j] = rand()%6;
        }
    }
    printf("Matrucya:\n");
    for (int i = 0;i<5;i++){
        for (int j = 0;j<5;j++){
            printf("%d\t", X[i][j]);
        }
        printf("\n");
    }
    for (int i = 0;i<5;i++){
        for (int j = 0;j<5;j++){
            if (X[i][j] > 0){
                sum_dot += X[i][j];
            }
        }
    }
    for (int i = 0;i<5;i++){
        if (X[i][i] == 0){
            X[i][i] = sum_dot;
        }
    }
    printf("Zminena matrucya:\n");
    for (int i = 0;i<5;i++){
        for (int j = 0;j<5;j++){
            printf("%d\t", X[i][j]);
        }
        printf("\n");
    }
    printf("Summa dodatnix elementiv: %d\n", sum_dot);
    return 0;
}