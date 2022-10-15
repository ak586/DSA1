#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *left;
    Node *right;
    Node(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
};

void preorder(Node *root)
{
    stack<Node *> st;
    Node *curr = root;

    while (curr != NULL || st.empty() != NULL)
    {
        while (curr != NULL)
        {
            cout << st.top() << " "; 
            st.push(curr);
            curr = curr->left;
        }
    }
}

int main(int argc, char const *argv[])
{
    Node *root = new Node(4);
    root->left = new Node(5);
    root->right = new Node(6);
    root->left->left = new Node(0);
    root->left->right = new Node(-1);
    root->right->left = new Node(10);
    root->right->right = new Node(11);
    preorder(root);
    return 0;
}
