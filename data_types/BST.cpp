#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create_node(int key)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = key;
    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
}
int BST(struct node *ptr)
{
    static struct node *p;
    if (ptr != NULL)
    {
        if (!BST(ptr->left))
        {
            return 0;
        }

        if (p != NULL && p->data >= ptr->data)
            return 0;

        p = ptr;
        return BST(ptr->right);
    }
    else
    {
        return 1;
    }
}

int search(struct node *ptr, int key)
{
    if (ptr != NULL)
    {
        if (ptr->data == key)
            return 1;

        if (ptr->data > key)
            search(ptr->left, key);

        if (ptr->data < key)
            search(ptr->right, key);
    }
    else
    {
        return 0;
    }
}
struct node *inorder(struct node *ptr)
{
    // [left]root[right]

    if (ptr != NULL)
    {
        inorder(ptr->left);
        cout << ptr->data;
        inorder(ptr->right);
    }
}
struct node *insert(struct node *ptr, int key)
{
    struct node *p;

    while (ptr != NULL)
    {
        p = ptr;
        if (ptr->data == key)
            return 0;

        if (ptr->data > key)
            ptr = ptr->left;

        else if (ptr->data < key)
            ptr = ptr->right;
    }

    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = key;
    n->left = NULL;
    n->right = NULL;

    if (p->data > key)
    {
        p->left = n;
    }
    else
    {
        p->right = n;
    }
}

int serach_iterative(struct node *ptr, int key)
{
    while (ptr != NULL)
    {
        if (ptr->data == key)
            return 1;

        if (ptr->data > key)
            ptr = ptr->left;

        else
            ptr = ptr->right;
    }

    return 0;
}

// int count(struct node *node)
// {
//     if (!node)
//         return 0;

//     queue<struct node *> q;
//     int count = 0;

//     q.push(node);

//     while (!q.empty())
//     {
//         struct node *temp = q.front();
//         q.pop();
//         count++;

//         if (temp->left != NULL)
//             q.push(temp->left);

//         if (temp->right != NULL)
//             q.push(temp->right);
//     }
//     return count;
// }

int x = 0;
int count(struct node *ptr)
{
    if (ptr != NULL)
    {
        x++;
        count(ptr->left);
        count(ptr->right);
    }
}

int main()
{

    struct node *p = create_node(5);
    struct node *p1 = create_node(4);
    struct node *p2 = create_node(3);
    struct node *p3 = create_node(7);
    struct node *p4 = create_node(2);

    p->left = p2;
    p->right = p3;
    p2->left = p4;
    p2->right = p1;

    if (BST(p))
        cout << "YES " << endl;
    else
        cout << "NO" << endl;

    if (search(p, 4))
        cout << "YES  it is found" << endl;
    else
        cout << "NO it is found" << endl;

    if (serach_iterative(p, 2))
        cout << "YES  it is found" << endl;
    else
        cout << "NO it is found" << endl;

    insert(p, 6);
    insert(p, 8);
    inorder(p);
    cout << endl;
    count(p);
    cout << x;
    return 0;
}