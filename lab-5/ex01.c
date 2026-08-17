#include <stdio.h>

int main()
{
    int range = 0;
    int num[10];

    for(int i=1; i<=10; i++)
    {
        printf("Enter the value %d here: ",i);
        scanf("%d",&num[i-1]);
    }
    printf("Values in array are : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", num[i]);
        if (i < 9)
        {
            printf(",");
        }   
        else
        {
            printf("\n");
        }
    }
    return 0;
}