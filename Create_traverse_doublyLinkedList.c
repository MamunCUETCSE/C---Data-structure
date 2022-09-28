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
    int data,i;
    head = (struct node*)malloc(sizeof(struct node));
    if(head == NULL)
    {
        printf("cann't allocate memory");
    }
    else{
            printf("Enter node no 1:");
            scanf("%d",&data);
        head->data = data;
        head->prevlink = NULL;
        head->nextlink = NULL;
        last = head;

        for(i=2; i<=n; i++)
        {
            newNode = (struct node*)malloc(sizeof(struct node));
            if(newNode==NULL)
            {
                printf("cann't allocate memory");
                break;
            }
            else{
            printf("Enter node no %d:",i);
            scanf("%d",&data);
            newNode->prevlink = last;
            newNode->data = data;
            newNode->nextlink = NULL;
            last->nextlink = newNode;
            last = newNode;
            }
        }
        printf("Successfully doubly list is created");

    }
}
void displayDoublyList()
{
    struct node *temp;
    temp = head;
    while(temp != NULL)
    {
        printf("%d\n",temp->data);
        temp = temp->nextlink;
    }
}
void displayDoublyListEnd()
{
    struct node *temp;
    temp = last;
    while(temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->prevlink;
    }
}
int main()
{
    int n;
    printf("How many nodes do u want to create:");
    scanf("%d",&n);
    createDoublyList(n);
    printf("\nThe created Doubly list from from is:\n");
    displayDoublyList();
    printf("Reverse DoublyList is:\n");
    displayDoublyListEnd();


}
