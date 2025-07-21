#include<stdio.h>
#include<stdlib.h>
int main() {
 FILE *fp;
 fp = fopen("L1.txt","r");
 if(fp == NULL) {
    printf("Error in opening file \n");
    exit(0);
 }
 char str[100];
 printf("Reading file : \n");
 //rewind(fp);

 while(fgets(str,sizeof(str),fp) != NULL) {

 puts(str);
 }
fclose(fp);
 return 0;
}