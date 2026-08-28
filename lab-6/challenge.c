#include <stdio.h>

int main() {
    struct {
        char name[20];
        int id;
        int math;
        int english;
        int science;
        int history;
    } stu[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter name, ID, and 4 grades for student %d:\n", i + 1);

        scanf("%s %d %d %d %d %d",
              stu[i].name,
              &stu[i].id,
              &stu[i].math,
              &stu[i].english,
              &stu[i].science,
              &stu[i].history);
    }

    printf("Student Averages:\n");

    float avg[3];

    for (int i = 0; i < 3; i++) {
        avg[i] = (stu[i].math +
                  stu[i].english +
                  stu[i].science +
                  stu[i].history) / 4.0;

        printf("%s (ID: %d): %.2f\n",
               stu[i].name,
               stu[i].id,
               avg[i]);
    }

    int topStudent = 0;

    for (int i = 1; i < 3; i++) {
        if (avg[i] > avg[topStudent]) {
            topStudent = i;
        }
    }

    printf("Top Student: %s with %.2f\n",
           stu[topStudent].name,
           avg[topStudent]);

    float mathAvg = 0;
    float englishAvg = 0;
    float scienceAvg = 0;
    float historyAvg = 0;

    for (int i = 0; i < 3; i++) {
        mathAvg += stu[i].math;
        englishAvg += stu[i].english;
        scienceAvg += stu[i].science;
        historyAvg += stu[i].history;
    }

    mathAvg /= 3;
    englishAvg /= 3;
    scienceAvg /= 3;
    historyAvg /= 3;

    printf("Subject Averages:\n");
    printf("Math: %.2f\n", mathAvg);
    printf("English: %.2f\n", englishAvg);
    printf("Science: %.2f\n", scienceAvg);
    printf("History: %.2f\n", historyAvg);

    // Find Top Subject
    float topSubject = mathAvg;
    char topSubjectName[20] = "Math";

    if (englishAvg > topSubject) {
        topSubject = englishAvg;
        sprintf(topSubjectName, "English");
    }

    if (scienceAvg > topSubject) {
        topSubject = scienceAvg;
        sprintf(topSubjectName, "Science");
    }

    if (historyAvg > topSubject) {
        topSubject = historyAvg;
        sprintf(topSubjectName, "History");
    }

    printf("Top Subject: %s with average %.2f\n",
           topSubjectName,
           topSubject);

    return 0;
}
