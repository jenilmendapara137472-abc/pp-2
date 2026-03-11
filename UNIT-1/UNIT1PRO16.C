#include <stdio.h>
#include <string.h>
int main(){
    char a[100],b[100];

    scanf("%s",a);
    scanf("%s",b);

    if(strcmp(a,b)==0)
        printf("Same");
    else
        printf("Not Same");

    return 0;
}
