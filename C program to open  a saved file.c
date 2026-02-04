//write a c program to open a saved file
#include<stdio.h>
#include<stdlib.h>
int main()
{
   char filename[200];
   char path[200];
  printf("Enter the Path of the file to open :");
  scanf("%s",&path);
  system (path);
  return 0;
  }
