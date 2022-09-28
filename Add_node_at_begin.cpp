#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node{
int data;
struct node *link;
};
void add_begin( struct node **head, int data)
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = *head;

    *head = ptr;
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 9;
    head->link = NULL;

    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = 8;
    ptr->link = NULL;

    head->link = ptr;
    add_begin(head, 64);
    ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr ->link;
    }
    return 0;
}

