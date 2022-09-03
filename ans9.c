// Write a program to print the elements of an array in reverse order.
#include <stdio.h>

int main()
{   
    int n;
    int a[10], i,*p=a;
    printf("Enter the Size of array:");
    scanf("%d",&n);
    printf("Enter the value in a array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (p+i));
    }
    printf("Your array is:");
    for(i=0;i<n;i++){
    printf(" %d",*(p+i));
    }
    printf("\nThe reverse of array is:");
    for(i=n-1;i>=0;i--){
    printf(" %d",*(p+i));
    }
    
    return 0;
}
