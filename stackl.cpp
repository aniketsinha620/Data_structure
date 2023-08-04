#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

bool isEmpty(struct Node *ptr)
{
    if (ptr == NULL)
    {
        return true;
    }

    return false;
}

bool isFull()
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    if (temp == NULL)
    {
        return true;
    }

    return false;
}

int display(struct Node *ptr)
{

    while (ptr->next != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }

    cout << ptr->data;
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
        struct Node *temp = ptr;
        ptr = ptr->next;
        free(temp);

        return ptr;
    }
}

struct Node *search(struct Node *ptr, int data)
{
    struct Node *temp = ptr;
    while (ptr== NULL)
    {
        if (ptr->data == data)
            cout << "found the element" << ptr->data << endl;

        ptr = ptr->next;
    }

    // if (ptr->data == data)
    //     cout << "found the element" << ptr->data << endl;
}
int main()
{

    struct Node *top = NULL;

    top = push(top, 4);
    top = push(top, 5);
    top = push(top, 7);
    top = push(top, 6);
    display(top);
    cout << endl;
    top = pop(top);
    display(top);
  
    return 0;
}