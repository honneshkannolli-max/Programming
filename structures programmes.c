#include<stdio.h>
struct Student{
int id;
char name[20];
float marks;
};
int main(){
struct Student s1={101,"Honnesh",89.23};
printf("ID:%d\n",s1.id);
printf("NAME:%s\n",s1.name);
printf("MARKS:%2f\n",s1.marks);

struct Student s2={102,"Harish",56.36};
printf("ID:%d\n",s2.id);
printf("NAME:%s\n",s2.name);
printf("MARKS:%2f\n",s2.marks);

struct Student s3={103,"Dhannajayya",89.36};
printf("ID:%d\n",s3.id);
printf("NAME:%s\n",s3.name);
printf("MARKS:%2f\n",s3.marks);

return 0;
}
