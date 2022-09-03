//  Write a program to find the maximum number between two numbers using a pointer
#include<stdio.h>
int main(){
    int a,b,*p,*q;
    p=&a;
    q=&b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);
    if((*p)>(*q))
        printf("%d is greater than %d",*p,*q);
    else
     printf("%d is greater than %d",*q,*p);
     return 0;

}
