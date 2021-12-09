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
    Node *merge_two_sorted_linkedList(Node *l1, Node *l2)
    {
        if (l1 == NULL && l2 == NULL)
        {
            return NULL;
        }
        if (l1 == NULL)
        {
            return l2;
        }
        if (l2 == NULL)
        {
            return l1;
        }
        Node *dummy = new Node(0);
        Node *ptr = dummy;

        while (l1 && l2)
        {
            if (l1->data < l2->data)
            {
                ptr->next = l1;
                l1 = l1->next;
            }
            else if (l1->data >= l2->data)
            {
                ptr->next = l2;
                l2 = l2->next;
            }
            ptr = ptr->next;
        }
        if (l1)
        {
            ptr->next = l1;
            l1 = l1->next;
        }
        if (l2)
        {
            ptr->next = l2;
            l2 = l2->next;
        }
        return dummy->next;
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
    LinkedList o;
    Node *head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(4);
    Node *head2 = new Node(1);
    head2->next = new Node(3);
    head2->next->next = new Node(4);

    Node *ans = o.merge_two_sorted_linkedList(head1, head2);
    cout << "Answer:"
         << "\n";
    o.printlist(ans);

    return 0;
}