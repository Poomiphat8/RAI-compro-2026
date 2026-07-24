#include <stdio.h>
int main(){
    int i_value;
    float f_value;
    char c_value[5];
    printf("Please enter an integer value:");
    scanf("%d",&i_value);
    printf("You entered %d\n", i_value);
    printf("Please enter a float value:");
    scanf("%f",&f_value);
    printf("You entered %f\n", f_value);
    printf("Please enter a character:");
    scanf("%s",c_value);
    printf("You entered %c\n", c_value[0]);
    return 0;
}