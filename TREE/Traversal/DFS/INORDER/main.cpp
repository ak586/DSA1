#include <iostream>
using namespace std;

struct Node
{
    int val;
    Node *left;
    Node *right;

    Node(int key)
    {
        val = key;
        left = NULL;
        right = NULL;
    }
};

// Left  Root Right
void inorder(Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }
}

int main()
{

    Node *root = new Node(4);
    root->left = new Node(5);
    root->right = new Node(6);
    root->left->left = new Node(0);
    root->left->right = new Node(-1);
    root->right->left = new Node(10);
    root->right->right = new Node(11);
    inorder(root);
    return 0;
}
