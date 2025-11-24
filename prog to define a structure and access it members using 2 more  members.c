#include<stdio.h>
struct Student {

int id;
char name[20];
float marks;

};

int main()
{
  struct Student s1={101,"Priya",89.5};

  struct Student s2={102,"Harish",90.8};

  struct Student s3={103,"Ravi",93.6};


  printf("ID :%d\n",s1.id);
  printf("Name:%s\n",s1.name);
  printf("Marks:%2f\n",s1.marks);

  printf("ID :%d\n",s2.id);
  printf("Name:%s\n",s2.name);
  printf("Marks:%2f\n",s2.marks);

  printf("ID :%d\n",s3.id);
  printf("Name:%s\n",s3.name);
  printf("Marks:%2f\n",s3.marks);

  return 0;

}
