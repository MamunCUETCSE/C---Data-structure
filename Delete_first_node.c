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
     newNode->link = NULL;

     temp->link = newNode;
     temp = temp->link;
     }
 }
}
void deleteFirstNode()
{
    struct node *toDelete;
    if(head==NULL)
    {
        printf("Node is already Empty");
    }
    else{
        toDelete = head;
        head = head->link;
        printf("node data deleted is:%d\n", toDelete->data);
        free(toDelete);
        printf("succesfully deleted the node\n");
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
    int n,data,position;
    printf("How many node do u want:");
    scanf("%d",&n);
    createList(n);
    printf("created list is:\n");
    displayList();
    deleteFirstNode();
    printf("After deletion Node data are:\n");
    displayList();
}

