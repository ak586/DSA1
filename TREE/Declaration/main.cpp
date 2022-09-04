#include <bits/stdc++.h>
using namespace std;

// structure for a binary tree
struct Node
{
    int val;
    Node *left;
    Node *right;
    Node(int k)
    {
        val = k;
        left = NULL;
        right = NULL;
    }
};

int main()
{
    Node *root = new Node(5);
    root->left = new Node(4);
    root->right = new Node(7);

    /* TREE
           5
        4     7
    */

    return 0;
}
