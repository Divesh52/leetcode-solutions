// Problem 61: Rotate List
// Approach: Linked List / Two-Pass with Circular Connection
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
    ListNode* rotateRight(ListNode* head, int k) {
       /* ListNode*ptr=head,*pre;
        if(head==NULL||k==0||head->next==NULL) return head;
        for(int i=0;i<=k;++i)
        {
        while (ptr->next != NULL){
            pre=ptr;
            ptr = ptr->next;
        }
            ptr->next = head;
            
            pre->next=NULL;
            /*
            ptr = ptr->next;
            head = head->next;
            ptr->next = NULL;
        }
        return head;
    }*/
    ListNode*ptr=head;
        if(head==NULL||k==0||head->next==NULL) return head;
        int s=0;
        while (ptr->next != NULL){
            ptr = ptr->next;
            s++;
        }
        s++;
        ptr->next=head;
        int t=s-k%s;
        for(int p=0;p<t;++p)
        {
            ptr=ptr->next;
        }
        ListNode*newn=ptr->next;
        ptr->next=NULL;   
        return newn;
    }
};
