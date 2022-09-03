// Write a program to count the number of vowels and consonants in a string using a
// pointer.
#include<stdio.h>
int main(){
    int vowels=0,cons=0; 
    char s[50],*p;
    p=s;
    printf("Enter the string:");

        fgets(p,50,stdin);
    
     for (int i = 0;*(p+i); i++)
     {
        if((*(p+i)=='a')||(*(p+i)=='e')||(*(p+i)=='i')||(*(p+i)=='o')||(*(p+i)=='u')){
        vowels++;            
        }
        else
        cons++;
     }
        printf("The vowels in a string are %d",vowels);
        printf("The consonants in a string are %d",cons-1);
    
    
    return 0;
}