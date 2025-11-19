// Program: Bubble Sort
#include <stdio.h>
int main()
{
int arr[5] = {25, 12, 22, 64, 11};
int i, j, temp;
int low =0, high=5,mid,key;
for(i = 0; i < 5 - 1; i++) {
for(j = 0; j <5 - i- 1; j++){
if(arr[j] > arr[j + 1]){
temp = arr[j];
 arr[j]= arr[j + 1];
  arr[j + 1] = temp;
}
}
}
printf("Sorted Array: ");
for(i = 0; i <5; i++)
printf( "%d\n", arr[i]);

//function to search binary array

printf("Enter the element to search:");
scanf("%d",&key);
while(low<=high){
mid = (low+high)/2;
if(arr[mid]== key){
printf("Element %d found at position %d\n",key,mid+1);
return 0;
}
else if(key<arr[mid])
high = mid -1 ;
else
low = mid + 1;
}
printf("Element %d not found\n",key);
return 0;
}
