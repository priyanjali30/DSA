#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int data;
    struct ListNode *next;
    ListNode(int data)
    {
        this->data = data;
        next = NULL;
    }
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {

        int count = 0;
        if (head == NULL)
        {
            return NULL;
        }
        ListNode *curr = head;
        while (curr)
        {
            count++;
            curr = curr->next;
        }

        int k = count - n;
        int i = 0;
        if (k == 0)
        {
            head = head->next;
            return head;
        }
        ListNode *curr1 = head;
        while (curr1 && curr1->next)
        {
            i++;
            if (i == k)
            {
                curr1->next = curr1->next->next;
            }
            else
            {
                curr1 = curr1->next;
            }
        }
        return head;
    }

    void printlist(ListNode *head)
    {
        while (head != NULL)
        {
            cout << head->data << " ";
            head = head->next;
        }
        cout << endl;
    }
};
//Approach 2
/*if(k==0)
        {
            head=head->next;
            return head;
        }
        ListNode* temp=head;
        ListNode* prev = temp;
        
        while(k--)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next = temp->next;
        return head;*/

//Approach 3
/*
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *start = new ListNode();
        start->next = head;
        ListNode *fast = start;
        ListNode *slow = start;

        for (int i = 1; i <= n; ++i)
            fast = fast->next;

        while (fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }

        slow->next = slow->next->next;

        return start->next;
    }
};
*/
int main()
{
    Solution l1;
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    cout << "Given Linked List"
         << "\n";
    l1.printlist(head);
    int n = 2;
    ListNode *ans = l1.removeNthFromEnd(head, n);
    l1.printlist(ans);
    return 0;
}