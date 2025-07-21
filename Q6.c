#include<stdio.h>
#include<stdlib.h>
int main() {
    FILE *fp;
    fp = fopen("F6.txt","a");
    if(fp == NULL){
        printf("Error in opening file\n");
        exit(0);
    }
    char str[100];
    printf("Enter sentence to write in a file : ");
    fgets(str,sizeof(str),stdin);
    fputs(str,fp);
    fclose(fp);
    fp = fopen("F6.txt","r");
    if(fp == NULL) {
    printf("Error in opening file \n");
    fclose(fp);

    }
    printf("Reading file to print on output screen\n");

    while(fgets(str,sizeof(str),fp)!= NULL){
        printf("%s",str);
    }
    fclose(fp);
    return 0;
}