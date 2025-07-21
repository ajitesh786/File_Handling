// Selection Sort
#include<stdio.h>
int main() {
    int a[30],n,i,j;
    int temp,minp;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    printf("Enter elements of Array to Sort : ");
    for(i = 0 ; i<n; i++) {
        scanf("%d",&a[i]);
    }
    for(i = 0; i<n-1; i++) {
        minp = i;
        for(j= i+1; j<n; j++) {
    if(a[j]< a[minp])
          minp = j;
        }
        temp = a[minp];
        a[minp] = a[i];
        a[i] = temp;
    }
    printf("Sorted Array is : \t");
    for( i = 0; i<n; i++ ) {
        printf("% d",a[i]);
    }
}