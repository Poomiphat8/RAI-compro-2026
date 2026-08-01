#include <stdio.h>

int main(){
    int num = 0;
    int result = 0;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Multiplication Table for %d:\n",num);
    for (int i = 1; i <= 12; i++){
        result = num * i;
        printf("%d x %d = %d\n",num,i,result);
    }
}