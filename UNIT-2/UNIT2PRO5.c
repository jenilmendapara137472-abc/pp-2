#include <stdio.h>

struct student {
    char name[20];
    float score;
};

void print(struct student s[], int n) {
    int i;
    printf("\nStudents with score > 5.0:\n");
    for(i=0;i<n;i++) {
        if(s[i].score > 5.0)
            printf("%s %.2f\n", s[i].name, s[i].score);
    }
}

int main() {
    struct student s[5];
    int i;

    for(i=0;i<5;i++) {
        printf("Enter Name and Score:\n");
        scanf("%s %f", s[i].name, &s[i].score);
    }

    print(s,5);

    return 0;
}
