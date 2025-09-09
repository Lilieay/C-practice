#include <stdio.h>
int main() {
    int ticket_number, predict_number;
    printf("Please enter your ticket number <xxxxx>: ");
    scanf("%d", &ticket_number);
    while (ticket_number>=10) {
        predict_number = 0;
        while (ticket_number>0) {
            predict_number += ticket_number%10;
            ticket_number /= 10;
        }
        ticket_number = predict_number;
    }
    printf("Your number is: %d\n", ticket_number);
    switch (ticket_number) {
        case 0:
            printf("Your prediction is: Bad luck");
            break;
        case 1:
            printf("Your prediction is: Good luck");
            break;
        case 2:
            printf("Your prediction is: Will meet your soul-mate soon ^__^");
            break;
        case 3:
            printf("Your prediction is: Should make merit");
            break;
        case 4:
            printf("Your prediction is: Lucky in Love");
            break;
        case 5:
            printf("Your prediction is: Need more rest!");
            break;
        case 6:
            printf("Your prediction is: Beware of an accident @_@");
            break;
        case 7:
            printf("Your prediction is: Lucky in game");
            break;
        case 8:
            printf("Your prediction is: Looking good");
            break;
        case 9:
            printf("Your prediction is: Will get some money soon.");
            break;
    }
    return 0;
}