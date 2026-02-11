//Program singly linked list caretion , insertion, deletion ,traversal
#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node*next;
};
struct Node*head=NULL;

void insertEnd(int value){
struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->next = NULL;
if(head==NULL){
    head = newNode;
}
else{
    struct Node*temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
        temp->next=newNode;
}
}
//insertion at beginning
void insertBeginning(int value){
struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->data = value;
newNode->next=head;
head=newNode;
}
//Delete first occurence of value
void deleteNode(int value){
struct Node*temp = head,*prev=NULL;
if(temp!=NULL&& temp->data ==value){
    head = temp->next;
    free(temp);
    return;
}
while(temp!=NULL&&temp->data!=value){
    prev=temp;
    temp=temp->next;
}
if(temp==NULL){
    printf("Value not found!\n");
    return;
}
prev->next=temp->next;
free(temp);
}
//display list (traverse)
void dislpay(){
struct Node*temp=head;
if(head==NULL){
    printf("List is empty.\n");
    return;
}
printf("Linked list:");
while(temp!=NULL){
    printf("%d",temp->data);
    temp=temp->next;
}
printf("\n");
}
//Main menu
int main(){
int choice,value;
while(1){
   printf("\n---Singly Linked List Menu---\n");
   printf("1.Insert at Begninning\n");
   printf("2.Insert at End\n");
   printf("3.Delete a Node\n");
   printf("4.Display List\n");
   printf("5.Exit\n");
   printf("Enter the choice:");
   scanf("%d",&choice);
}
switch(choice){
case1:
    printf("Enter the Value:");
    scanf("%d",&value);
    insertBeginning(value);
    break;
    case2:
    printf("Enter the Value:");
    scanf("%d",&value);
    insertEnd(value);
    break;
    case3:
    printf("Enter the Value:");
    scanf("%d",&value);
    deleteNode(value);
    break;
    case4:
    display();
    break;
    case5:
    exit(0);
    default:
    printf("Invalid choice!\n");
}

}


