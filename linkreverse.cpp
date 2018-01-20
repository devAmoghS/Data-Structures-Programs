#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
static void reverse(struct node** head_ref)
{
    struct node* prev   = NULL;
    struct node* current = *head_ref;
    struct node* next;
    while (current != NULL)
    {
        next  = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head_ref = prev;
}

void push(struct node** head_ref, int new_data)
{

    struct node* new_node =
            (struct node*) malloc(sizeof(struct node));

        new_node->data  = new_data;
        new_node->next = (*head_ref);
        (*head_ref)    = new_node;
}


void printList(struct node *head)
{
    struct node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
}

int main()
{

    struct node* head = NULL;
int num,n;
cout<<"Enter the number of nodes:";
cin>>n;
for(int i=0;i<n;i++)
{
cout<<"Enter the element:";
cin>>num;
     push(&head, num);
     }
     printList(head);
     reverse(&head);
     cout<<"\n Reversed Linked list \n";
     printList(head);
     getchar();
}
