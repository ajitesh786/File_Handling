#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    char str[30];
    FILE *fp;
    fp = fopen("read.txt","a+");
    if(fp == NULL) {
        printf("Error.\n");
        exit(1);
    } 
        fputs("Ajitesh Kumar",fp);
    rewind(fp);
    while (!feof(fp))
    {
        fgets(str,17,fp);
    printf("%s",str);  /* code */
    }
    
  
   

    fclose(fp);
}