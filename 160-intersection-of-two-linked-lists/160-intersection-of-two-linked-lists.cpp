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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1=0, len2=0;
        auto t1=headA, t2=headB;
        while(t1) len1++, t1 = t1->next;
        while(t2) len2++, t2 = t2->next;
        int diff = abs(len1-len2);
while(len1>len2) {
            len1--;
            headA=headA->next;
        }
        
		//If second one is longer, we traverse it, till it becomes equal to length of first...
        while(len2>len1) {
            len2--;
            headB=headB->next;
        }
        
		//Since length of both is now equal, we traverse them together, and break if the nodes become equal...
        while(headA!=headB) {
            headA=headA->next;
            headB=headB->next;
        }
        return headA;
    }
};