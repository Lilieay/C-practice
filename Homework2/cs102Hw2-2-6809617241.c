#include <stdio.h>
int main(){
    int a,b,c;
    printf("Please enter length of each side of your triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a+b>c && a+c>b && b+c>a && (a>0 && b>0 && c>0)){
        if (a==b && b==c){
            printf("This is an equilateral triangle.");
        } else if(a==b || a==c || b==c){
            printf("This is an isosceles triangle.");
        } else {
            printf("This is an scalene triangle.");
        }

    }else {
        printf("This is NOT a possible triangle.");
    }
    return 0;
}