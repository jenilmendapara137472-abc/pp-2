#include <stdio.h>

void maxmin(int *a, int *b) {
    if(*a > *b)
        printf("Max = %d\nMin = %d", *a, *b);
    else
        printf("Max = %d\nMin = %d", *b, *a);
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    maxmin(&x, &y);
    return 0;
}
