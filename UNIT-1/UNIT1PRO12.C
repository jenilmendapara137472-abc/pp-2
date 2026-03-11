#include <stdio.h>
int main(){
    char name[50];
    int i=0;

    printf("Enter name: ");
    scanf("%s",name);

    while(name[i]!='\0'){
        printf("%c\n",name[i]);
        i++;
    }
    return 0;
}
