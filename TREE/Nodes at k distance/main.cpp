#include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node *left;
    Node *right;
    int val;
    Node(int key)
    {
        val = key;
    }
};

/*
 *Printing nodes at Kth level
 */
void levelPrint(Node *root, int k)
{
    if (root == NULL)
        return;
    if (k == 0)
        cout << root->val << " ";
    levelPrint(root->left, k - 1);
    levelPrint(root->right, k - 1);
}

int main()
{
    Node *root = new Node(4);
    root->left = new Node(5);
    root->right = new Node(6);
    // root->left->left = new Node(0);
    // root->left->right = new Node(-1);
    // root->right->left = new Node(10);
    levelPrint(root, 1);
}
