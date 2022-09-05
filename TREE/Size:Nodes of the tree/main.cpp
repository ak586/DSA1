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

// left right Root
void postorder(Node *root);

/*
! time complexity O(n)
! Aux space complexity O(h)
*/

int countNodes(Node *root);

int main()
{

    Node *root = new Node(4);
    root->left = new Node(5);
    root->right = new Node(6);
    root->left->left = new Node(0);
    root->left->right = new Node(-1);
    root->right->left = new Node(10);
    root->right->right = new Node(11);
    postorder(root);
    cout << endl
         << countNodes(root) << endl;

    return 0;
}

// counting number of nodes
int countNodes(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

void postorder(Node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->val << " ";
    }
}