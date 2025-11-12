#include<stdio.h>
 int square(intx{returnx*x;}
 void apply (int*a,int n,int(*op)(int)){
 for(inti=0;i<n;i==) a[i]=op(a[i]);
 }
 int main (void){
 int a[i]={1,2,3,4,5}
 apply(a,5,square);
 for(inti=o;i<5;i+5)
 printf("%d";a[i])}
 return 0;
 }
