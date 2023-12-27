#include <iostream>
using namespace std;

// using array;
struct stack
{
    int size;
    int top;
    int *arr;
};

bool isEmpty(struct stack *ptr)
{

    if (ptr->top == -1)
        return true;

    return false;
}

bool isFull(struct stack *ptr)
{
    
    if (ptr->top == (ptr->size - 1))
        return true;


    return false;
}

void display(struct stack *ptr)
{
    for (int i = 0; i <= ptr->top; i++)
    {
        cout << ptr->arr[i] << " ";
    }
    cout << endl;
}

int push(struct stack *ptr, int data)
{
    if (isFull(ptr))
    {
        cout << "Overflow" << endl;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = data;
        display(ptr);
    }
}

int pop(struct stack *ptr)
{

    if (isEmpty(ptr))
    {
        cout << "Stack is empty";
    }

    else
    {
        ptr->top--;
    }

    display(ptr);
}

int main()
{
    struct stack *s = new stack;
    s->size = 5;
    s->top = -1;
    s->arr = new int[s->size];

    push(s, 1);
    push(s, 2);
    push(s, 3);
    pop(s);
    pop(s);
    pop(s);

    delete[] s->arr;
    delete s;

    return 0;
}
