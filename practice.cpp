#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

bool isFull()
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));

    if (temp == NULL)
        return true;

    return false;
}

bool isEmpty(struct Node *ptr)
{
    if (ptr == NULL)
        return true;

    return false;
}

struct Node *display(struct Node *ptr)
{
    while (ptr != NULL)
    {

        cout << ptr->data << " ";
        ptr = ptr->next;
    }

    cout << endl;
}

struct Node *push(struct Node *ptr, int data)
{

    if (!isFull())
    {

        struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = data;
        temp->next = ptr;
        ptr = temp;

        return ptr;
    }
}

struct Node *pop(struct Node *ptr)
{
    if (!isEmpty(ptr))
    {
        ptr = ptr->next;
        return ptr;
    }
}

int main()
{

    struct Node *top = NULL;
    top = push(top, 3);
    top = push(top, 4);
    top = push(top, 5);
    top = push(top, 6);
   
    display(top);
    top=pop(top);
    display(top);
    return 0;
}