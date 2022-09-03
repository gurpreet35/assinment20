// Write a function to swap values of two in variables of calling function. (TSRS)
#include<stdio.h>
int swap(int *a,int *b);
int main(){
    int x,y;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the value of y:");
    scanf("%d",&y);
    printf("value of x and y before swapping:%d %d\n",x,y);
    swap(&x,&y);
    printf("value of x and y after swapping:%d %d",x,y);
    return 0;
}
int swap(int *a,int *b){
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  return 0;
}