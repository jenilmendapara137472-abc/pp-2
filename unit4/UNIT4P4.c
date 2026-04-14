#include<stdio.h>
int main(){
    FILE *fp = fopen("test.txt","a");
    fprintf(fp,"\nAppended text");
    fclose(fp);
}
