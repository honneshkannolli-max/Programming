// Program: Pointer Arithmetic

#include <stdio.h>

int main() {

int arr[] = {5, 10, 15, 20, 25};

int *ptr= arr;

printf("ptr = %p, *ptr = %d\n", ptr, *ptr);

ptr++; // move to next element (adds sizeof(int))

printf("After ptr++: ptr = %p, *ptr = %d\n", ptr, *ptr);

ptr += 2; // move 2 steps

printf("After ptr += 2: ptr = %p, *ptr = %d\n", ptr, *ptr);

return 0;
}

