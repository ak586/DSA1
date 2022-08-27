#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    char val;
    Node *next;
    Node(char val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert(Node **head, char x);
void printList(Node *head);

string strongestPassword(Node *head)
{
    string max = "";
    string temp = "";
    while (head != NULL)
    {
        if (temp[temp.size() - 1] == head->val)
        {
            if (max.size() < temp.size())
            {
                max = temp;
            }
            temp = "";
        }
        else
        {
            temp = temp + head->val;
        }
        head = head->next;
    }
    if (max.size() < temp.size())
        return temp;
    return max;
}

int main()
{

    Node *head = new Node('a');
    insert(&head, 'a');
    insert(&head, 'b');
    printList(head);
    cout << strongestPassword(head) << endl;

    return 0;
}

void insert(Node **head, char x)
{
    Node *temp = new Node(x);
    if (*head == NULL)
    {
        *head = temp;
    }
    Node *curr = *head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
}

void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->val;
        head = head->next;
        if (head != NULL)
            cout << "-->";
    }
    cout << endl;
}
