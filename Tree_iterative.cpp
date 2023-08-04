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
    stack<struct node *> s;
    while (ptr != NULL || s.empty() == false)
    {
        while (ptr != NULL)
        {
            cout << ptr->data;
            s.push(ptr);
            ptr = ptr->left;
        }

        ptr = s.top();
        s.pop();
        ptr = ptr->right;
    }
}
struct node *postorder(struct node *ptr)
{
    // left[right]root

    stack<struct node *> s1, s2;
    s1.push(ptr);

    while (!s1.empty())
    {
        ptr = s1.top();
        s1.pop();
        s2.push(ptr);

        if (ptr->left)
            s1.push(ptr->left);
        if (ptr->right)
            s1.push(ptr->right);
    }

    while (!s2.empty())
    {
        ptr = s2.top();
        s2.pop();
        cout << ptr->data << " ";
    }
}

void inorder(struct node *ptr)
{
    stack<struct node *> s;
    while (ptr != NULL || !s.empty())
    {
        while (ptr != NULL)
        {
            s.push(ptr);
            ptr = ptr->left;
        }

        ptr = s.top();
        s.pop();
        cout << ptr->data;
        ptr = ptr->right;
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