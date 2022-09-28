#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *link;
}*head;
void createList(int n)
{
 struct node *newNode, *temp;
 int data,i;
 head =(struct node*)malloc(sizeof(struct node));
 if(head==NULL)
 {
     printf("Can't Allocate Memory");
 }
 else{
    printf("Enter node no 1:");
    scanf("%d",&data);
    head->data = data;
    head->link = NULL;
    temp = head;
 }

 for(i=2; i<=n; i++)
 {
     newNode = (struct node*)malloc(sizeof(struct node));
     if(newNode==NULL)
     {
         printf("can't allocate memory");
     }
     else{
     printf("Enter node no %d:",i);
     scanf("%d",&data);
     newNode->data = data;
     newNode->link =NULL;

     temp->link = newNode;
     temp = temp->link;
     }
 }
}
void insertEnd(int data)
{
    struct node *newNode,*temp;
    newNode = (struct node*)malloc(sizeof(struct node));
    if(newNode==NULL)
    {
        printf("cann't allocate memory ");
    }
    else{
    newNode->data = data;
    newNode->link = NULL;

    temp = head;
    while(temp != NULL && temp->link != NULL)
    {
        temp=temp->link;
    }
    temp->link = newNode;
    printf("Node successfully inserted");
    }
}
void displayList()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("No list created");
    }
    else{
        temp = head;
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp = temp->link;
        }
    }
}
int main()
{
    int n,data;
    printf("How many node do u want:");
    scanf("%d",&n);
    createList(n);
    printf("created list is:\n");
    displayList();
    printf("Enter new node data:");
    scanf("%d",&data);
    insertEnd(data);
    printf("After inserting Node data are:\n");
    displayList();
}
