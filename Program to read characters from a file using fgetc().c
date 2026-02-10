//Program to read characters from a file using fgetc()
#include<stdio.h>
int main(){
FILE *fp;
char ch;
fp=fopen("charfile.txt","r");
if(fp==NULL){
    printf("File not found!\n");
    return 1;
}
printf("File contents:\n");
while((ch=fgetc(fp))!=EOF)
    putchar(ch);
fclose(fp);
return 0;
}
