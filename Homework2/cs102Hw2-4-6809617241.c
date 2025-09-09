#include <stdio.h>
int main() {
    int a, b, min, max;
    printf("Please enter two interges: ");
    scanf("%d %d", &a, &b);
    if (a<b){
        min = a;
        max = b;
    } else {
        min = b;
        max = a;
    }
    printf("All the numbers that can be divided by 13 are:\n");
    while (min<=max) {
        if (min%13==0) {
            printf("%d\n", min);
        }
        min++;
    }
    printf("Bye!!");
    return 0;
}