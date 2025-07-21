#include<stdio.h>
#include<stdlib.h>
int fact(int x){
    if(x==0)
    return 1;
    return fact(x-1)*x;
}
int main() {
    FILE *fptr;
    fptr = fopen("read.txt","a");
    if(fptr==NULL){
        printf("File is not allocated successfully.\n");
 
    }
    fputs("Hi my name is Ajitesh Kumar",fptr);
    fclose(fptr);
}