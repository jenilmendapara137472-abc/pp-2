#include <stdio.h>

int main() {
    int n, i;
    int a[100];
    int sum = 0;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    avg = (float)sum / n;

    printf("Total = %d\n", sum);
    printf("Average = %.2f", avg);

    return 0;
}
