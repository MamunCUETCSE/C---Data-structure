#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *prevlink;
struct node *nextlink;
}*head, *last;

void createDoublyList(int n)
{
    struct node *newNode;
    int data;
    head = (struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        printf("Cann't allocate memory");
    }
    else{
            printf("Enter the node no 1:");
            scanf("%d",&data);
            head->prevlink = NULL;
            head->data = data;
            head->nextlink = NULL;
            last = head;

            for(int i=2;i<=n; i++)
            {
                newNode = (struct node*)malloc(sizeof(struct node));
                if(newNode==NULL)
                {
                    printf("Cannot allocate Memory");
                    break;
                }
                else{
                 printf("Enter the node no %d:",i);
                 scanf("%d",&data);
                 newNode->data = data;
                 newNode->prevlink = last;
                 newNode->nextlink = NULL;

                 last->nextlink = newNode;
                 last = newNode;
                }
            }
            printf("doubly List is successfully created");

  }
}
void displayDoublyList()
{
    struct node *temp;
    temp = head;
    printf("After operation DoublyList is:\n");
    while(temp != NULL)
    {
        printf("%d",temp->data);
        temp = temp->nextlink;
    }
}
void insertAtBegin()
{
    struct node *newNode,*temp;
    int data;
    temp = head;
    newNode = (struct node*)malloc(sizeof(struct node));
    if(newNode==NULL)
    {
        printf("cann't allocate memory");
    }
    else{
            printf("Enter new node data:");
           scanf("%d",&data);
           newNode->data = data;
           newNode->nextlink = temp;
           newNode->prevlink = NULL;
           temp = newNode;
            head = temp;

    }

}

int main()
{
    int n,operation;
    printf("Which operation Do u want:\n press 1 for create and traverse a doubly linked list:\n");
    printf("press 2 for insert at the beginning:\n press 3 for insert at the end:\n press 4 for insert at a position:\n");
    scanf("%d",&operation);
    switch(operation)
    {
    case 1:
        printf("How many node do u want to create:");
        scanf("%d",&n);
        createDoublyList(n);
        displayDoublyList();
        break;
    case 2:
        printf("How many node do u want to create:");
        scanf("%d",&n);
        createDoublyList(n);
        insertAtBegin();
        displaydoublyList();
        break;

    }
}
