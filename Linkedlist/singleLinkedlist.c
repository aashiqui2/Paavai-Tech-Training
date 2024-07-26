#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} node;
node *head = NULL;
void insertBegining(int val)
{
    node *newnode = (node *)malloc(sizeof(node));
    if (head == NULL)
    {
        newnode->data = val;
        newnode->next = NULL;
        head = newnode;
    }
    else
    {
        newnode->data = val;
        newnode->next = head;
        head = newnode;
    }
}
void display()
{
    node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
void insertAtEnd(int val)
{
    node *newnode = (node *)malloc(sizeof(node));
    if (head == NULL)
    {
        newnode->data = val;
        newnode->next = NULL;
    }
    else
    {
        newnode->data = val;
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next = NULL;
    }
}
void deleteAtBegin()
{
    if (head == NULL)
    {
        printf("LIST IS EMPTY");
        return;
    }
    else
    {
        printf("deleted at begining element is %d\n", head->data);
        head = head->next;
    }
}
void deleteAtEnd()
{
    if (head == NULL)
    {
        printf("LIST IS EMPTY");
        return;
    }
    else
    {
        node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        printf("deleted at end element is %d\n", temp->next->data);
        temp->next = NULL;
    }
}
void countNode()
{
    int count = 0;
    node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    printf("the count is %d", count);
}
int main()
{
    insertBegining(1);
    insertBegining(2);
    insertBegining(3);
    insertAtEnd(4);
    // deleteAtBegin();
    // deleteAtBegin();
    // deleteAtEnd();
    display();
    countNode();

    return 0;
}