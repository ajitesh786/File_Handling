 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 int main() {
    FILE *fp = NULL;
    fp = fopen("read.txt","r");
    if(fp ==NULL){
        printf("Error");
        exit(1);
    }
    char str[50];
    fgets(str,30,fp);
    printf("%s",str);
    printf("This was before while loop.\n\n");
    while(!feof(fp)){
    fgets(str,8,fp);
    printf("%s",str);
    }
    fclose(fp);
    return 0;
 }