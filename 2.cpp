/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *l3=new ListNode(0),*cur=l3;
        int carry=0;
        while(l1||l2)
        {
            if(l1)
            {
                carry+=l1->val;
                l1=l1->next;
            }
            if(l2)
            {
                carry+=l2->val;
                l2=l2->next;
            }
            cur->next=new ListNode(carry%10);
            cur=cur->next;
            carry=carry/10;
        }
        if(carry>0)cur->next=new ListNode(carry);
        return l3->next;
    }
};
