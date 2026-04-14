#include<stdio.h>
int main(){
    FILE *fp = fopen("test.txt","r");

    fseek(fp,5,SEEK_SET);
    printf("Position: %ld\n", ftell(fp));

    rewind(fp);
    printf("After rewind: %ld", ftell(fp));

    fclose(fp);
}
