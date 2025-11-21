#include <stdio.h>
#define MAX_STUDENTS 5
#define MAX_NAME_LENGTH 50
typedef struct {
    int id;
    char name[MAX_NAME_LENGTH];
    float score;
} Student;

void inputStudentData(Student std[]){
    int i;
    for(i=0;i<MAX_STUDENTS;i++){
        printf("Enter student %d's ID: ",i+1);
        scanf("%d",  &std[i].id);
        printf("Enter student %d's name: ",i+1);
        scanf("%s", &std[i].name);
        printf("Enter student %d's score: ",i+1);
        scanf("%f", &std[i].score);
    }
    printf("**************************************************\n");
    
}
void printStudentData(Student std[]){
    printf("Student Data:\n");
    printf("ID\tName\tScore:\n");
    int i;
    for(i=0;i<MAX_STUDENTS;i++){
        printf("%d\t%s\t%.2f\n",std[i].id,std[i].name,std[i].score);
    }
    printf("**************************************************\n");
}
void findHighestScore(Student std[]){
    printf("Student with the highest score:\n");
    int i;
    int max=0;
    for(i=0;i<MAX_STUDENTS;i++){
        if(std[max].score<std[i].score){
            max = i;
        }
    }
    printf("ID: %d  Name: %s  Score: %.2f\n",std[max].id,std[max].name,std[max].score);
    printf("**************************************************\n");
}
int main() {
    Student students[MAX_STUDENTS];
    inputStudentData(students);
    printStudentData(students);
    findHighestScore(students);
    return 0;
}