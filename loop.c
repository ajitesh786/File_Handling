#include<stdio.h>
int main() {
    int num,i,dig,temp,sum;

    printf("Enter number till to check Palindrome number : ");
    scanf("%d",&num);
    printf("Palindrome Numbers are : ");
    for(i = 2; i<=num; i++) {
        sum = 0;
        temp = i;
    while (temp>0)
    {
        /* code */
        dig = temp % 10;
        sum = sum * 10 + dig;
        temp /= 10;
    }
    if(sum == i)
    printf("%d\t",sum);

    }
    return 0;
}