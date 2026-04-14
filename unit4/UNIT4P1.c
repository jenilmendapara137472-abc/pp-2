#include<stdio.h>
int main(){
    FILE *fp;
    char ch;

    fp = fopen("test.txt","w");
    printf("Enter text (press # to stop):\n");
    while((ch = getchar()) != '#'){
        fputc(ch, fp);
    }
    fclose(fp);

    fp = fopen("test.txt","r");
    while((ch = fgetc(fp)) != EOF){
        printf("%c", ch);
    }
    fclose(fp);
}
