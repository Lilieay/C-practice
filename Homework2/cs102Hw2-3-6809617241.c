#include <stdio.h>
int main() {
    int input_seconds;
    int seconds=0;
    int minutes=0;
    int hours=0;
    printf("Please enter the time in seconds: ");
    scanf("%d", &input_seconds);
    if (input_seconds>=0) {
         if (input_seconds>60){
            seconds = input_seconds%60;
            minutes = input_seconds/60;
            if (minutes>60){
                hours = minutes/60;
                minutes = minutes%60;
            }
         } else {
            seconds = input_seconds;
         }
         printf("The time is %d hour(s), %d minute(s), and %d second(s).", hours, minutes, seconds);
    } else {
        printf("Invalid Input !!");
    }
    return 0;
}