#include<stdio.h>

int main(){
int arr[5]={10,20,30,40,50};
int*p= arr;// pointer to first element
printf("Array elements using pointer:");
for(int i=0;i<5;i++)
printf("%d", *(p+i));  // pointer arithmetic
return 0;
}
