#include <stdio.h>
int main()
{
    int original[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int reversed[9];

    for(int i=0; i<9;i++)
    {
        reversed[i] = original[8-i];
    }
    printf("Reversed Array: ");
    for(int j=0; j<9;j++)
    {
        printf("%d ",reversed[j]);
    }
    printf("\n");
    return 0;
}