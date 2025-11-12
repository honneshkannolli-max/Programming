#include<stdio.h>
int main(void)
{
 int m[2][4]={{1,2,3,4,5},{5,6,7,8,9}};
    for(int i=0;i<2;i++){
    for(int j=0;j<5;j++){
    printf("%d",m[i][j]); // print the number first
    if(j==4)
    printf("\n");       // if last column,print newline
    else
    printf(" ");        // otherwise,print space
    }
    }
    return 0;
}
