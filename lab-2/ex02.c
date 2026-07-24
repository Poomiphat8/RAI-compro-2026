#include <stdio.h>
int main(){

    int value;
    printf("Enter total minutes:");
    scanf("%d",&value);
    int value_2 = value/60;
    int value_3 = value %60;
    printf("%d minutes is %d hour(s) and %d minute(s)",value,value_2,value_3);

    return 0;
}