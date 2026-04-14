#include<stdio.h>
int main(){
    FILE *fp = fopen("test.txt","r+");
    char ch;

    while((ch=fgetc(fp))!=EOF){
        if(ch=='a'){
            fseek(fp,-1,SEEK_CUR);
            fputc('x',fp);
        }
    }
    fclose(fp);
}
