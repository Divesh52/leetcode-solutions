// Problem 2: Add Two Numbers
// Approach: Linked List / Iterative Simulation
// Time Complexity: O(max(m, n)) 
// Space Complexity: O(max(m, n)) 

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode*ptr=new ListNode;
       ListNode*ptr2=ptr;
       int c=0;
       while(l1||l2||c>0)
       {
        if (l1)
        {
            c+=l1->val;
            l1=l1->next;
        }
        if(l2)
        {
            c+=l2->val;
            l2=l2->next;
        }
        ptr2->next=new ListNode(c%10);
        c/=10;
        ptr2=ptr2->next;
       }
       return ptr->next;}
};
