#include <bits/stdc++.h>
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

// calculating the height of the binary tree
int height(Node *root)
{
    if (root == NULL)
        return 0;
    else
    {
        return max(height(root->left), height(root->right)) + 1;
    }
}
int main()
{

    Node *root = new Node(4);
    root->left = new Node(5);
    // root->right = new Node(6);
    root->left->left = new Node(0);
    root->left->right = new Node(-1);
    // root->right->left = new Node(10);
    // root->right->right = new Node(11);
    cout << height(root) << endl;
    return 0;
}
