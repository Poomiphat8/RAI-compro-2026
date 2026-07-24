#include <stdio.h>
int main(){
    char name[100];
    int age;
    float height;
    char university[50];

    printf("Enter your full name: ");
    scanf(" %[^\n]",name);
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your height: ");
    scanf("%f",&height);
    printf("Enter you University name: ");
    scanf(" %[^\n]",university);

    printf("Hi! Everyone. This is %s from %s. I am %d years old and my height is %0.2f cm tall.",name , university , age,height);
}