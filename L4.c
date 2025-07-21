#include<stdio.h>
#include <stdlib.h>
int main() {
    FILE *fp;
    char str[100];
    // printf("Create File name : ");
    // fgets(str,sizeof(str),stdin);
    fp = fopen("L1.txt","a");
    if(fp == NULL)
    {
        printf("Error in opening file \n");
        exit(1);
    }
    printf("Input sentence to write in file : ");
    fgets(str,sizeof(str),stdin);
    fputs(str,fp);
    fclose(fp);

    return 0;


}