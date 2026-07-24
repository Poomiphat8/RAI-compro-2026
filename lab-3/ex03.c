#include <stdio.h>
#include <stdbool.h>

int main(){
    int num_1;
    printf("Enter a number: ");
    scanf("%d",&num_1);

    switch(num_1 >= 1 && num_1 <= 100){
        case true:
            switch(num_1 %2){
                case 0:
                    printf("%d is even\n",num_1);
                    break;
                case 1:
                    printf("%d is odd\n",num_1);
                    break;
            }
            break;
        case false:
            printf("%d is out of range\n",num_1);
    }
    return 0;
}