#include <stdio.h>

struct student {
    int rollno;
    char name[20];
    char department[40];
    int year;
    float score;
};

int main() {
    struct student s[5];
    int i;

    for(i=0;i<5;i++) {
        printf("\nEnter details of student %d:\n", i+1);
        scanf("%d %s %s %d %f",
              &s[i].rollno, s[i].name,
              s[i].department, &s[i].year,
              &s[i].score);
    }

    printf("\nStudent Records:\n");
    for(i=0;i<5;i++) {
        printf("%d %s %.2f\n",
               s[i].rollno, s[i].name, s[i].score);
    }

    return 0;
}
