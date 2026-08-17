#include <stdio.h>
int main()
{
    int value[10];
    int odd , even;
    for (int i=0; i<10; i++)
    {
        printf("Enter value %d: ",i+1);
        scanf("%d",&value[i]);
        if (value[i]%2 == 0)
        {
            even++;
        }
        else 
        {
            odd++;
        }
        
    }
    printf("Even numbers: %d\n",even);
    printf("Odd numbers: %d\n",odd);
    return 0;
}