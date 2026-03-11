#include <stdio.h>
int main(){
    char str[100];
    int i=0,v=0,s=0;

    printf("Enter string: ");
    gets(str);

    while(str[i]!='\0'){
        if(str[i]==' ') s++;
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            v++;
        i++;
    }

    printf("Spaces = %d\nVowels = %d",s,v);
    return 0;
}
