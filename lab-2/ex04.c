#include <stdio.h>
int main(){
    char name[100];
    int id;
    float score_pro;
    float score_phs;
    float score_cal;

    printf("Enter your Name: ");
    scanf("%[^\n]",name);
    printf("Enter your student ID: ");
    scanf("%d",&id);
    printf("Enter your Programming score: ");
    scanf("%f",&score_pro);
    printf("Enter your Physics score: ");
    scanf("%f",&score_phs);
    printf("Enter your Calculus score: ");
    scanf("%f",&score_cal);

    float sum = (score_cal + score_phs + score_pro)/3;
    printf("Hi %s(%d)! Your GPA is %0.2f",name , id , sum);
}