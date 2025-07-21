#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {

    FILE *fp;
    fp = fopen("read.txt","r+");
    if(fp == NULL) {
        printf("Error.\n");
        exit(1);
    }
     char str[15];
    fgets(str,14,fp);
    printf("%s",str);

    fputs("Jenney ",fp);
    

    fclose(fp);
}