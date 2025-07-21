#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    FILE *fp=NULL;
    char str[100];
    int i;
    fp = fopen("new.txt","a");
    if(fp == NULL){
        printf("Error.\n");
        exit(1);
    }
    printf("Enter string : ");
    gets(str);
    fprintf(fp,"\n");
    fputs(str,fp);
    fclose(fp);
    return 0;
}