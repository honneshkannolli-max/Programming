#include <stdio.h>
int main(){
    int M1,M2,M3,total,average;
    char G;
    printf("Enter the marks(M1,M2,M3):");
    scanf("%d%d%d",&M1,&M2,&M3);
    total= M1+M2+M3;
    average= total/3;
    printf("The total marks is %d\n",total);
    printf("The average marks is %d\n",average);
    if(average >= 90)
    G = 'A';
    else if (average >=80)
    G = 'B';
    else if (average >=70)
    G = 'C';
    else if (average >=60)
    G = 'D';
    else if (average >=50)
    G = 'E';
    else
    G = 'F';
    printf("Grade=%c\n" ,G );
    if (average >=50)
    printf("Result is pass\n");
    else
    printf("Result is Fail\n");
    return 0;
}
