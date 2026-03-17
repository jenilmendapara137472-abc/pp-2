#include <stdio.h>

struct student {
    char name[20];
    int year;
};

int main() {
    struct student s[5];
    int i;

    for(i=0;i<5;i++) {
        printf("Enter Name and Year of Joining:\n");
        scanf("%s %d", s[i].name, &s[i].year);
    }

    printf("\nStudents Joined in 2019:\n");
    for(i=0;i<5;i++) {
        if(s[i].year == 2019)
            printf("%s\n", s[i].name);
    }

    return 0;
}
