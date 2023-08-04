#include <iostream>
using namespace std;

struct node
{
    string data;
    struct node *left;
    struct node *right;
};

struct node *create(string key)
{
    struct node *ptr = new node;
    ptr->data = key;
    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
}

struct node *insert(struct node *ptr, string key)
{
    if (ptr == NULL)
        return create(key);

    if (ptr->data > key)
        ptr->left = insert(ptr->left, key);
    else if (ptr->data < key)
        ptr->right = insert(ptr->right, key);

    return ptr;
}

struct node *inorder(struct node *ptr)
{
    if (ptr != NULL)
    {
        inorder(ptr->left);
        cout << ptr->data << " "; // Add a space here to separate the elements.
        inorder(ptr->right);
    }
}

int main()
{
    struct node *root = NULL;

    string strings[] = {"Hncc", "Hackathon", "Gameathon", "Uxathon", "Bitcode", "Droneathon", "Model", "Sae", "Iste", "Iete", "Technovation", "Techmahtosav"};

    for (const string &str : strings)
    {
        root = insert(root, str);
    }

     inorder(root);
    cout << endl;

    return 0;
}
// A threaded binary tree is a type of binary tree data structure where the empty left and right child pointers in a binary tree are replaced with threads that link nodes directly to their in-order predecessor or successor, thereby providing a way to traverse the tree without using recursion or a stack.