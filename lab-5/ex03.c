#include <stdio.h>

int main()
{   
    int sum;
    int student[5];
    int highest = student[0];
    for (int i=0;i<5;i++)
    {
        printf("Enter the mark of student %d: ",i+1);
        scanf("%d",&student[i]);
        sum = sum + student[i];
        if (highest < student[i])
        {
            highest = student[i];
        }
    }
    printf("Total Marks : %d\n",sum);
    printf("Highest marks: %d\n",highest);
    return 0;

}