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

    int highest = 0;
    for (int i = 0; i < 3; i++) {
        if (student[i].score > student[highest].score) {
            highest = i;
        }
    }
    printf("\nThe highest scores belongs to %s at %.2f scores!",student[highest].name,student[highest].score);
    return 0;
}
