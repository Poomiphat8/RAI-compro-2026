#include <stdio.h>
int main()
{
    int num[8];
    printf("Enter number 1: ");
    scanf("%d", &num[0]);

    int highest = num[0];
    int lowest = num[0];
    for (int i=1; i<8;i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&num[i]);

        if (highest < num[i])
        {
            highest = num[i];
        }
        else if (lowest > num[i])
        {
            lowest = num[i];
        }
    }
    printf("Smallest number: %d\n",lowest);
    printf("Largest number: %d\n",highest);
}