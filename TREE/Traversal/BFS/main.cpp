#include <bits/stdc++.h>
using namespace std;

struct Node
{
    char val;
    Node *left;
    Node *right;

    Node(char key)
    {
        val = key;
        left = NULL;
        right = NULL;
    }
};
// Level order traversal or BFS
// Time : theta(n)
// Space : width of binary tree: O(n)
void levelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        Node *curr = q.front();
        q.pop();
        if (curr != NULL)
            cout << curr->val << " ";
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    }
}

int main()
{

    Node *root = new Node('a');
    root->left = new Node('b');
    root->right = new Node('c');
    root->left->left = new Node('d');
    root->left->right = new Node('e');
    root->right->left = new Node('f');
    root->right->right = new Node('g');
    levelOrder(root);
    return 0;
}
