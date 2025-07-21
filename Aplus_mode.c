#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define error printf("An error occurred.\n")

int main() {
    FILE *fp;
    fp = fopen("amode.txt", "a+");
    if (fp == NULL) {
        error;
        exit(1);
    }

    char str[50];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);  // Read input from user (stdin)
    fputs(str, fp);                  // Write it to file

    rewind(fp);                      // Go back to beginning of file

    char str1[50];
    while (fgets(str1, sizeof(str1), fp) != NULL) {
        printf("%s", str1);          // Print each line in the file
    }

    fclose(fp);
    return 0;
}
