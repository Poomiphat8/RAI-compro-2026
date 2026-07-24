#include <stdio.h>

int main(){
    int num_1;
    int num_2;
    printf("Enter a number_1: ");
    scanf("%d",&num_1);
    printf("Enter a number_2 : ");
    scanf("%d",&num_2);

    if (num_1 == num_2)
        printf("Match\n");
    else
        printf("Does not match. Try again\n");
    return 0;
}