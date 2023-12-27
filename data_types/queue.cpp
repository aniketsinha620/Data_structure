#include <bits/stdc++.h>
using namespace std;

struct Queue
{
    int size;
    int f;
    int r;
    int *arr;
};

void enqueue_val(struct Queue *ptr, int data)
{

    ptr->r++;
    ptr->arr[ptr->r] = data;

    cout << ptr->arr[ptr->r];
}

void dequeue(struct Queue *ptr)
{
    int data = -1;
    ptr->f++;
    data = ptr->arr[ptr->f];

    // cout << data;
}

int main()
{

    struct Queue q;
    q.size = 10;
    q.f = q.r = -1;
    q.arr = (int *)malloc(sizeof(int) * q.size);

    enqueue_val(&q, 10);
    dequeue(&q);
    cout << q.arr[q.r];
    return 0;
}