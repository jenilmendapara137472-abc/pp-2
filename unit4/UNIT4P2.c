#include<stdio.h>
int main(){
    FILE *fp = fopen("test.txt","r");
    char ch;
    int charCount=0, space=0, tab=0, line=0;

    while((ch=fgetc(fp))!=EOF){
        charCount++;
        if(ch==' ') space++;
        if(ch=='\t') tab++;
        if(ch=='\n') line++;
    }

    printf("Chars=%d Spaces=%d Tabs=%d Lines=%d",
            charCount, space, tab, line);
    fclose(fp);
}
