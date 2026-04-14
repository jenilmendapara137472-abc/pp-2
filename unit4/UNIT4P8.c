#include<stdio.h>

struct emp{
    int code;
    char name[20];
    float salary;
};

int main(){
    FILE *fp = fopen("emp.dat","wb+");
    struct emp e;
    int i;

    for(i=0;i<3;i++){
        printf("Enter code, name, salary: ");
        scanf("%d %s %f",&e.code,e.name,&e.salary);
        fwrite(&e,sizeof(e),1,fp);
    }

    rewind(fp);

    printf("\nRecords:\n");
    while(fread(&e,sizeof(e),1,fp)){
        printf("%d %s %.2f\n",e.code,e.name,e.salary);
    }

    fclose(fp);
}
