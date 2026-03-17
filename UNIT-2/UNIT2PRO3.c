#include <stdio.h>
#include <string.h>

struct student {
    int rollno;
    char name[20];
    float score;
};

int main() {
    struct student s[5], temp;
    int i,j;

    for(i=0;i<5;i++) {
        printf("Enter RollNo Name Score:\n");
        scanf("%d %s %f",
              &s[i].rollno, s[i].name, &s[i].score);
    }

    for(i=0;i<5;i++) {
        for(j=i+1;j<5;j++) {
            if(strcmp(s[i].name, s[j].name) > 0) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nSorted by Name:\n");
    for(i=0;i<5;i++)
        printf("%s %.2f\n", s[i].name, s[i].score);

    return 0;
}
2
