#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    FILE *fptr;
    char str[] = "Hi my name is Ajitesh Kumar 2025";
   fptr =  fopen("open.txt","w");
    if(fptr == NULL) {
    printf("File is not Allocated sucessfully.\n");
    exit(1);
    }
     int i ;
     for(i = 0; i != strlen(str); i++)
     fputc(str[i],fptr);

    fclose(fptr);
    return 0;

}