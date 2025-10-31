#include <stdio.h>

int main() {
    int n, i, j , MaxIndex=0, MinIndex=0;
    float number[51], MaxValue, MinValue, sum=0 , avg;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%f", &number[i]);
    }
    MaxValue = number[0];
    MinValue = number[0];
    for (i = 0; i < n; i++) {
        if (number[i] > MaxValue) {
            MaxValue = number[i];
            MaxIndex = i;
        }

        if (number[i] < MinValue) {
            MinValue = number[i];
            MinIndex = i;
        }
    }
    printf("Maximum value: %.2f\n", MaxValue);
    printf("Minimum value: %.2f\n", MinValue);
    printf("Maximum index: %d\n", MaxIndex);
    printf("Minimum index: %d\n", MinIndex);
    for(i=0;i<n;i++){
        sum+=number[i];
    }
    avg= sum/n;
    printf("Average: %.2f\n", avg);
    printf("Reverse order:");
    for (i = n - 1; i >= 0; i--) {
        printf(" %.2f", number[i]);
    }
    printf("\n");
    printf("Above average list:");
    for (i = 0; i < n; i++) {
        if (number[i] > avg) {
            printf(" %.2f", number[i]);
        }
    }
    printf("\n");
    printf("Negative coordinates:");
    int first = 1; 
    for (i = 0; i < n; i++) {
        if (number[i] < 0) {
            for (j = i + 1; j < n; j++) {
                if (number[j] < 0) {
                    if (first == 1) {
                        printf(" (%.2f, %.2f)", number[i], number[j]);
                        first = 0;
                    } else {
                        printf(", (%.2f, %.2f)", number[i], number[j]);
                    }
                }
            }
        }
    }
    return 0;
}