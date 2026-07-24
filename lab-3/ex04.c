#include <stdio.h>

int main(){
    int score_cal;
    int score_phy;
    int score_sci;
    char name[100];

    printf("Enter your name : ");
    scanf("%s",name);
    printf("Enter your Calculus : ");
    scanf("%d",&score_cal);
    printf("Enter your Physic : ");
    scanf("%d",&score_phy);
    printf("Enter your Science : ");
    scanf("%d",&score_sci);

    float score_avg = (score_cal + score_phy + score_sci)/3;
    if (score_avg >= 80)
      printf("%s, your average is %0.2f. You got grade A.\n",name , score_avg);
    else if (score_avg < 80 && score_avg >= 70)
      printf("%s, your average is %0.2f. You got grade B.\n",name , score_avg);
    else if (score_avg < 70 && score_avg >= 60)
      printf("%s, your average is %0.2f. You got grade C.\n",name , score_avg);
    else if (score_avg < 60 && score_avg >= 50)
      printf("%s, your average is %0.2f. You got grade D.\n",name , score_avg);
    else if (score_avg < 50)
      printf("%s, your average is %0.2f. You got grade F.\n",name , score_avg);
    else
      printf("error");
}