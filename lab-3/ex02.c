#include <stdio.h>

int main(){
    int num_1;
    printf("Enter a number: ");
    scanf("%d",&num_1);

    if (num_1 < 1 || num_1 > 100)
        printf("%d is out of range\n",num_1);
    else if(num_1 % 2 == 0)
        printf("%d is even\n",num_1);
    else
        printf("%d is odd\n",num_1);
    return 0;
}