#include<stdio.h>

int main(){
    FILE *fp = fopen("test.txt","r");

    fseek(fp,10,SEEK_SET);
    printf("Position = %ld\n", ftell(fp));

    rewind(fp);
    printf("After rewind = %ld\n", ftell(fp));

    fclose(fp);
}
