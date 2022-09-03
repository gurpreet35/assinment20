// Write a program to compute the sum of all elements in an array using pointers
#include <stdio.h>

int main()
{   
    int n,sum=0;
    int a[10], i,*p=a;
    printf("Enter the Size of array:");
    scanf("%d",&n);
    printf("Enter the value in a array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (p+i));
    }
    for(i=0;i<n;i++){
    sum+=*(p+i);
    }
    printf("The Sum of the element of the array is %d",sum);
    
    return 0;
}
