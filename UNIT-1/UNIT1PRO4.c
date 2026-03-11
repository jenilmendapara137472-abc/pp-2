#include <stdio.h>

int main() {
    int n, i;
    int a[100];
    int pos = 0, neg = 0, even = 0, odd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);

        if(a[i] >= 0)
            pos++;
        else
            neg++;

        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Positive numbers = %d\n", pos);
    printf("Negative numbers = %d\n", neg);
    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d\n", odd);

    return 0;
}
