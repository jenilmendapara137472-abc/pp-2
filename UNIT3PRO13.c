#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    printf("Enter string: ");
    gets(str);

    int len = strlen(str);

    for(int i=0; i<len; i++)
        rev[i] = str[len-i-1];

    rev[len] = '\0';

    printf("Reversed String: %s", rev);
    return 0;
}
