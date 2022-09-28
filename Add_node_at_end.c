#include<stdio.h>
#include<stdlib.h>
 struct node{
 int data;
 struct node *link;
 };
 struct node *create_node(struct node *head, int data)
 {
     struct node *temp = malloc(sizeof(struct node));
     temp->data = data;
     temp->link = NULL;
     return temp;
 };
 void print_node_data(struct node *ptr, int data)
 {
     while(ptr!= NULL)
     {
         cout<<ptr->data<<" ";
         ptr = ptr->link;

     }
 }
 int main()
 {


 }
