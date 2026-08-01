#include <stdio.h>

int main(){
    int num = 0;
    int sum = 0;
    int i = 1;

    while (num < 10){
        printf("%d.Enter the number: ",i++);
        scanf("%d",&num);
        sum = sum + num;
    }
    printf("total sum is %d\n", sum);
    return 0;
}