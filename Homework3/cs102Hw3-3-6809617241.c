#include <stdio.h>

int main() {
    int n,i,j,Matrix[8][8];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &Matrix[i][j]);
        }
    }
    int Magic = 1; 
    int n2 = n * n;
    int check[65] = {0}; 

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            int num = Matrix[i][j];
            if (num < 1 || num > n2) {
                Magic = 0;
            }
            else if (check[num] == 1) { 
                Magic = 0;
            }
            else {
                check[num] = 1; 
            }
        }
    }
    if (Magic == 1) {  
        int sum = 0;
        for (j = 0; j < n; j++) {
            sum += Matrix[0][j];
        }
        for (i = 1; i < n; i++) {
            int sumofrow = 0;
            for (j = 0; j < n; j++) {
                sumofrow += Matrix[i][j];
            }
            if (sumofrow != sum) {
                Magic = 0;
            }
        }
        for (j = 0; j < n; j++) {
            int sumofcolumn = 0;
            for (i = 0; i < n; i++) {
                sumofcolumn += Matrix[i][j];
            }
            if (sumofcolumn != sum) {
                Magic = 0;
            }
        }
        int diagonal1 = 0;
        for (i = 0; i < n; i++) {
            diagonal1 += Matrix[i][i];
        }
        if (diagonal1 != sum) {
            Magic = 0;
        }
        int diagonal2 = 0;
        for (i = 0; i < n; i++) {
            diagonal2 += Matrix[i][n - 1 - i];
        }
        if (diagonal2 != sum) {
            Magic = 0;
        }
    }
    if (Magic == 1) {
        printf("This is a magic square!\n");
    } else {
        printf("This is NOT a magic square!\n");
    }

    return 0;
}