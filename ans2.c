// Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include<stdio.h>
#include<string.h>
int swap(char *,char  *);
int main(){
    char x[10],y[10];
    printf("Enter string x:");
    fgets(x,10,stdin);
    printf("Enter string y:");
    fgets(y,10,stdin);
    printf("value of x and y before swapping:\n%s %s\n",x,y);
    
    swap(x,y);
    
    printf("value of x and y after swapping:\n%s %s",x,y);
    return 0;
}
int swap(char *(p),char *(q)){
  char temp[11];
  strcpy(temp,(p));
  strcpy((p),(q));
  strcpy((q),temp);
  
  return 0;
}