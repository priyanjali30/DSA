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
    Node *middle(Node *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return NULL;
        }
        int count = 0;
        Node *curr = head;
        while (curr)
        {
            count++;
            curr = curr->next;
        }

        int k = count / 2;

        Node *curr1 = head;
        while (k--)
        {
            curr1 = curr1->next;
        }
        return curr1;
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
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    cout << "Given Linked List"
         << "\n";
    l1.printlist(head);
    Node *ans = l1.middle(head);
    l1.printlist(ans);

    return 0;
}