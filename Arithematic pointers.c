#include<stdio.h>
int main(void){
int x=42;
int*p=&x;             // p holds address of x
printf("%d\n",*p);   //dereference-> 42
*p=100;               // modifies x
printf("%d\n",x);    // 100
return 0;
}
