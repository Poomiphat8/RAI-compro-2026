#include <stdio.h>
int main(){
    int num_1;
    int num_2;
    int num_3;

    int max;
    int min;

    printf("Enter integer #1: ");
    scanf("%d",&num_1);
    printf("Enter integer #2: ");
    scanf("%d",&num_2);
    printf("Enter integer #3: ");
    scanf("%d",&num_3);
    
    min = num_1;
    if (num_2 < min)
        min = num_2;
    if (num_3 < min)
        min = num_3;

    max = num_1;
    if (num_2 > max)
        max = num_2;
    if (num_3 > max)
        max = num_3;

    float sum = num_1 + num_2 + num_3;
    float average = sum / 3;

    printf("\nResults:\n");
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Sum: %f\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}