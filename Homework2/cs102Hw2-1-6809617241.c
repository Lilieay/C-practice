#include <stdio.h>
int main() {
    float mom_height;
    float dad_height;
    printf("Enter the height of the mother (centimeters): ");
    scanf("%f", &mom_height);
    printf("Enter the height of the father (centimeters): ");
    scanf("%f", &dad_height);
    float average=(mom_height+dad_height)/2;
    float min_height_possible=average-13.5;
    float max_height_possible=average+13.5;
    printf("The possible height of the child is between %.2f to %.2f centimeters.", min_height_possible, max_height_possible);
    return 0;
}