#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, even=0, odd=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));

    printf("Enter elements:\n");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0)
            even += arr[i];
        else
            odd += arr[i];
    }

    printf("Sum of Even = %d\nSum of Odd = %d", even, odd);

    free(arr);
    return 0;
}
