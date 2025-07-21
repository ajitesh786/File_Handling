#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    FILE *fp;
    fp = fopen("fprintf.txt","w");
    if(fp == NULL){
        printf("Error.\n");
        exit(1);
    }
    int num ;
    char str[15];
        printf("Enter string : ");
    gets(str);
    printf("Enter number : ");
    scanf("%d",&num);

    fprintf(fp,"%d %s",num,str);
    fclose(fp);
    return 0;
}