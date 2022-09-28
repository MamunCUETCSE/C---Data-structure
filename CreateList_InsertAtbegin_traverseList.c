#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *link;
}*head;
void createList(int n)
{
    int data,i;
    struct node *newNode, *temp;
    head =(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        printf("Memory can't be allocated");
    }
    else{
    printf("Enter node no 1:");
    scanf("%d",&data);
    head->data = data;
    head->link = NULL;
    temp = head;
    }

    for(i=2;i<=n;i++)
    {
        newNode = (struct node*)malloc(sizeof(struct node));
        if(newNode==NULL)
        {
            printf("Memory cann't be allocated");
            break;
        }
        else{
            printf("Enter node %d:",i);
            scanf("%d",&data);
            newNode->data=data;
            newNode->link=NULL;

            temp->link = newNode;
            temp = temp->link;
        }
    }


}
void InsertAtBegin(int data){
        struct node *newNode;
        newNode =(struct node*)malloc(sizeof(struct node));
        if(newNode==NULL)
        {
            printf("cann't allocate memory");
        }
        else{
        newNode->data = data;
        newNode->link = head;
        head=newNode;
        }
    }
void displayList()
{
    struct node *ptr;
    if(head==NULL)
    {
        printf("can't allocate memory");
    }
    else{
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr = ptr->link;
    }
    }
}

int main()
{

    int n,j;
    printf("how many Node Do u want:");
    scanf("%d",&n);
    createList(n);
    printf("Enter insertion node: ");
    scanf("%d",&j);
    InsertAtBegin(j);
    displayList();
}
