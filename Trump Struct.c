#include<stdio.h>
struct student{
int id;
char name[10];
float marks;
};
int main(){
struct student s1={149,"Donald T A",89.63};
printf("ID:%d\n",s1.id);
printf("NAME:%s\n",s1.name);
printf("MARKS:%2f\n",s1.marks);
return 0;
}
