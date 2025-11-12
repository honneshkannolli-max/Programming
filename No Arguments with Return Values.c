#include<stdio.h>
int getnumber(){
int num;
printf("Enter the number:");
scanf("%d",&num);
return num;
}
int main(){
int n= getnumber();
printf("You Entered:%d",n);
}
