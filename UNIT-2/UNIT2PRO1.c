#include <stdio.h>

struct student {
    int rollno;
    char name[20];
    char department[40];
    int year;
    float score;
};

int main() {
    struct student s;

    printf("Enter RollNo Name Department Year Score:\n");
    scanf("%d %s %s %d %f",
          &s.rollno, s.name, s.department,
          &s.year, &s.score);

    printf("\nStudent Details:\n");
    printf("RollNo: %d\nName: %s\nDepartment: %s\nYear: %d\nScore: %.2f",
           s.rollno, s.name, s.department,
           s.year, s.score);

    return 0;
}

