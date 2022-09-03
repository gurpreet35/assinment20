// Write a program to calculate the length of the string using a pointer
#include<stdio.h>
int main(){
    int count=0; 
    char s[50],*p;
    p=s;
    printf("Enter the string:");

        fgets(p,50,stdin);
    
    printf("The length of the string is :");
     for (int i = 0;*(p+i); i++)
     {
        count++;
     }
        printf("%d",count);
    
    
    return 0;
}