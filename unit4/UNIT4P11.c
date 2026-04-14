#include<stdio.h>

int main(){
    FILE *fp = fopen("test.txt","r");

    fseek(fp,0,SEEK_END);
    printf("File size = %ld bytes", ftell(fp));

    fclose(fp);
}
