#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class LinkedList
{
public:
    Node *reverse(Node *head)
    {
        Node *curr = head;
        Node *pre = NULL;
        Node *next = NULL;
        while (curr)
        {
            next = curr->next;
            curr->next = pre;
            pre = curr;
            curr = next;
        }
        return pre;
    }
    void printlist(Node *head)
    {
        while (head != NULL)
        {
            cout << head->data << " ";
            head = head->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList l1;
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    cout << "Given Linked List"
         << "\n";
    l1.printlist(head);
    Node *ans = l1.reverse(head);
    l1.printlist(ans);

    return 0;
}