
class Solution {

public:
    bool isPalindrome(ListNode* head) {
        
        ListNode* curr= head;
        stack<int>s;
        if(head==NULL)
        {
            return true;
        }
        while(curr)
        {
            s.push(curr->val);
            curr=curr->next;
        }
        while(!s.empty())
        {
            int i = s.top();
            s.pop();
            if(head->val!=i)
            {
                return false;
            }
            head=head->next;
        }
        return true;
        
    }
};
