// Write a program in C to demonstrate how to handle the pointers in the program.
#include<stdio.h>
int main(){
    int a=10,*p,**q;
    p=&a;
    q=&p;
    printf("The address of a is : %x\n",p);
    printf("The address of a is : %p\n",p);
    printf("The value of a:%d\n",*p);
    printf("The value of p:%x\n",*q);
    printf("The address of p:%x\n",q);
    printf("The address of q:%x\n",q);
    return 0;
}