#include <stdio.h>

struct date {
    int d,m,y;
};

struct student {
    int rollno;
    char name[20];
    struct date doj;
};

int main() {
    struct student s;

    scanf("%d %s %d %d %d",
          &s.rollno,
          s.name,
          &s.doj.d,
          &s.doj.m,
          &s.doj.y);

    printf("Roll: %d\n", s.rollno);
    printf("Name: %s\n", s.name);
    printf("Date: %d/%d/%d",
           s.doj.d,
           s.doj.m,
           s.doj.y);

    return 0;
}
