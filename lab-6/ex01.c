#include <stdio.h>
int main(){
    struct student{
        char name[50];
        int age;
        float score;
        int i;
    }student[3];

    for(int i=0; i<3; i++){
        printf("Student %d's name: ",i+1);
        scanf(" %[^\n]",student[i].name);
        printf("Student %d's age: ",i+1);
        scanf("%d",&student[i].age);
        printf("Student %d's score: ",i+1);
        scanf("%f",&student[i].score);
        printf("\n");
    }

    for(int i=0; i <3; i++){
        printf("\nStudent %d name is \"%s\", age %d. score %.2f",i+1,student[i].name,student[i].age,student[i].score);
    }
    return 0;
}