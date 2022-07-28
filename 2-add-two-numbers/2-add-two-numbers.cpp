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
        ListNode* t1=l1, *t2=l2;
        ListNode* res = l1, *temp;
        int c1=0, c2=0;
        while(t1){
            c1++;t1=t1->next;
        }
        while(t2){
            c2++;t2=t2->next;
        }
        if(c1<c2) return addTwoNumbers(l2, l1);
        
        int carry=0;
        while(l1 or l2){
            int sum=0;
            if(l1) sum+=l1->val;
            if(l2) sum+=l2->val;
            sum+=carry;
            l1->val = sum%10;
            carry = sum/10;
            if(!l1->next) temp=l1;
            if(l1)   l1 = l1->next;
            if(l2)   l2 = l2->next;
        }
        if(carry){
            temp->next = new ListNode(carry);
        }
        return res;
        
    }
};