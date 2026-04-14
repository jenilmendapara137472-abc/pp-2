#include<stdio.h>

int main(){
    FILE *f1 = fopen("num.txt","r");
    FILE *f2 = fopen("rev.txt","w");

    int num, rev=0, rem;

    fscanf(f1,"%d",&num);

    while(num!=0){
        rem = num % 10;
        rev = rev*10 + rem;
        num = num / 10;
    }

    fprintf(f2,"%d",rev);

    fclose(f1);
    fclose(f2);
}
