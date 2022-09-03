// . Write a program to print a string in reverse using a pointe
#include<stdio.h>
int main(){
    int count=0; 
    char s[50],*p;
    p=s;
    printf("Enter the string:");

        fgets(p,50,stdin);
    
     for (int i = 0;*(p+i); i++)
     {
        count++;
     }
    printf("The reverse of the string is:");
    for (int j = count;j>=0; j--)
    {
        printf("%c",*(p+j));
    }
    
    
    
    return 0;
}