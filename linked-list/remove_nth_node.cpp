// Problem 19: Remove Nth Node From End of List
// Approach: Linked List / Two-Pass Counting
// Time Complexity: O(n)  
// Space Complexity: O(1)

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
class Solution {
public:
    int c(ListNode*head)
    {
        int c1=0;
        while(head)
        {
            c1++;
            head=head->next;
        }
        return c1;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int co=c(head);
        if(!head||!head->next) return NULL;
        if(n==co) return head->next;
        ListNode*ptr=head;
        int k=co-n+1;
        int i=1;
        cout<<k;
        while(i!=k-1)
        {
            ptr=ptr->next;
            i++;
        }
        if(!ptr->next->next)
        {
            ptr->next=NULL;
        }
        else ptr->next=ptr->next->next;
        return head;
    }
};
