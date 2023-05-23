#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void display(struct Node *ptr)
{
    while (ptr != NULL)
    {

        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}

struct Node *insert_mid(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = head;
    int i = 1;
    while (i != index)
    {
        temp = temp->next;
        i++;
    }
    ptr->data = data;
    ptr->next = temp->next;
    temp->next = ptr;
    return head;
}

void inset_first(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = NULL;
    if (head == NULL)
    {
        head = ptr;
        head->next = NULL;
    }
    else
    {
        ptr->next = head;
        head = ptr;
    }
    display(head);
}

void create()
{
    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 01;
    head->next = first;

    first->data = 02;
    first->next = second;

    second->data = 03;
    second->next = NULL;

    // display(head);
    // inset_first(head, 22);
    insert_mid(head, 22, 2);
    display(head);
}

int main()
{

    create();

    return 0;
}