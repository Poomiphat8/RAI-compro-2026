#include <stdio.h>

int main(){
    int height;
    int radius;

    printf("Enter cone height : ");
    scanf("%d",&height);
    printf("Enter cone base radius : ");
    scanf("%d",&radius);

    float volume = (1.0/3.0)*3.14159*(radius*radius)*height;

    if (volume > 260){
        printf("cone volume = %0.1f\n",volume);
        printf("This cone is perfect for Supun project");
    }
    else{
        printf("cone volume = %0.1f\n",volume);
        printf("This cone is not fit for Supun project");
    }
    return 0;

}