#include<stdio.h>
struct department{
char sub1[20];
char sub2[20];
char sub3[20];
char sub4[20];
};
struct college{
char name[30];
char city[20];
struct department dept; //nested strcuture
};
int main(){
struct college s1={"GRADEN CITY UNIVERSITY","BANGALORE","CSE","IT","AIML","DATASCIENCE"};
printf("College Name:%s\n",s1.name);
printf("City:%s\n",s1.city);
printf("Courses:%s,%s,%s,%s\n",s1.dept.sub1,s1.dept.sub2,s1.dept.sub3,s1.dept.sub4);
return 0;
}
