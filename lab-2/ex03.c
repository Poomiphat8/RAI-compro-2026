#include <stdio.h>

int main() {
    char name[50];
    int age;
    float height;
    float weight;
    char gender;
    char education[100];

    printf("Enter your Name: ");
    scanf(" %[^\n]", name);

    printf("Enter your Age: ");
    scanf("%d", &age);

    printf("Enter your Height: ");
    scanf("%f", &height);

    printf("Enter your Weight: ");
    scanf("%f", &weight);

    printf("Enter your Gender: ");
    scanf(" %c", &gender);

    printf("Enter your Education Qualification: ");
    scanf(" %[^\n]", education);

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Weight: %.2f\n", weight);
    printf("Gender: %c\n", gender);
    printf("Education: %s\n", education);

    return 0;
}