#include <iostream>
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

/*
! time complexity O(n)
! Aux space complexity O(h)
*/
void inorder(Node *root);

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

void inorder(Node *root)
{
    if (root == NULL)
        return;
    stack<Node *> st;
    Node *curr = root;
    st.push(curr);

    while (curr != NULL || st.empty() != true)
    {
        while (curr != NULL)
        {
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top();
        st.pop();
        cout << curr->val << " ";
        curr = curr->right;
    }
}
