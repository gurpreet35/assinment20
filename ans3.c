//Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include <stdio.h>
void sort(int *,int);

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
    sort(p,n);
    printf("The sorting list of array is :");
    for(i=0;i<n;i++){
    printf(" %d",*(p+i));
    }
    
    return 0;
}
void sort(int *p,int n){
    int i;
    for (i = 0; i < n; i++)
    {
        for (int j = i+1; j < (n-1); j++)
        {
            int temp;
            if (*(p+i) > *(p+j))
            {
                temp = *(p+i);
                *(p+i) =*(p+j);
                *(p+j) = temp;
            }
        }
    }

}