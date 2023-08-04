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

struct node *preorder(struct node *ptr)
{
    // root[left][right]

    if (ptr != NULL)
    {
        cout << ptr->data;
        preorder(ptr->left);
        preorder(ptr->right);
    }
}
struct node *postorder(struct node *ptr)
{
    // [left][right]root

    if (ptr != NULL)
    {
        postorder(ptr->left);
        postorder(ptr->right);
        cout << ptr->data;
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
int main()
{

    struct node *p = create_node(4);
    struct node *p1 = create_node(5);
    struct node *p2 = create_node(6);
    struct node *p3 = create_node(7);
    struct node *p4 = create_node(8);
    struct node *p5 = create_node(9);
    p->left = p2;
    p->right = p3;
    p2->left = p4;
    p2->right = p1;
    p1->left = p5;
    cout << "Preorder";
    preorder(p);
    cout << endl;

    cout << "Postorder";
    postorder(p);
    cout << endl;

    cout << "Inorder";
    inorder(p);
    cout << endl;
    return 0;
}