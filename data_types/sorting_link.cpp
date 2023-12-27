#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *display(struct Node *temp)
{

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

struct Node *sort(struct Node *head)
{
    struct Node *prev = head;
    struct Node *curr = head->next;

    while (curr != NULL)
    {
        if (curr->data < prev->data)
        {

            prev->next = curr->next;
            curr->next = head;
            head = curr;
            curr = prev;
        }
        else
        {
            prev = curr;
        }

        curr = curr->next;
    }

    display(head);
}

void insertAthead(Node*& head, int data)
{
    Node* n = new Node(data);
    n->next = head;
    head = n;
}

int main()
{
    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 03;
    head->next = first;

    first->data = 02;
    first->next = second;

    second->data = -4;
    second->next = third;

    third->data = -10;
    third->next = NULL;

    display(head);
    push(head, 4);
    display(head);
    // sort(head);
    return 0;
}