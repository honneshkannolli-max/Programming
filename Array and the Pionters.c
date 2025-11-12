#include<stdio.h>
//Function declarations
void inputArray(int*arr,int n);
void displayArray(int*arr,int n);
int sumArray(int*arr,int n);
int CountPositive(int*arr,int n);
int CountNegative(int*arr,int n);

int main(){
int arr[100];
int n,sum,pos_count,neg_count;

printf("Enter the number of elements in the array(max 100):");
if(scanf("%d",&n)!=1||n<0||n>100)
{
puts("Invalid size.*");
return 1;
}

inputArray(arr,n);
printf("\nArray elements are:");
displayArray(arr,n);

sum = sumArray(arr,n);
printf("\nSum of all elements=%d",sum);

 pos_count = CountPositive(arr,n);
 neg_count = CountNegative(arr,n);

printf("\nNumber of positive Elements=%d",pos_count);
printf("\nNumber of negative Elements=%d\n",neg_count);

return 0;
}
/*Read n integers into array via pointer arithemtic*/
void inputArray(int*arr,int n){
printf("Enter %d elements:\n",n);
for(int i=0;i<n;i++){
scanf("%d",arr+i);
}
}
/*print array elements*/
void displayArray( int*arr,int n){
for(int i=0;i<n;i++){
printf("%d",*(arr+i));
}
}
// Function to calculate sum of array elements
int sumArray(int*arr,int n){
int sum=0;
for(int i =0;i<n;i++){
sum += *(arr+i);
}
return sum;
}
/* count positives (>0)*/
int CountPositive (int*arr,int n){
int cnt=0;
for(int i=0;i<n;i++){
if(*(arr+i)>0) cnt++;
}
return cnt;
}
int CountNegative (int*arr,int n)
{
int cnt=0;
for(int i=0;i<n;i++){
if(*(arr+i)<0) cnt++;
}
return cnt;
}
