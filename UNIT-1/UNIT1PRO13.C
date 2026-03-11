#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int i,len=0;

    printf("Enter string: ");
    scanf("%s",str);

    printf("Using strlen = %lu\n",strlen(str));

    while(str[len]!='\0')
        len++;

    printf("Without function = %d",len);

    return 0;
}
