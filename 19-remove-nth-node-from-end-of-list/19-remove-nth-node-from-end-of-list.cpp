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
    int len=0;
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        calclength(head);
        ListNode* temp = head;
        // if(len==1) return NULL;
        // else if(len==2 and n==1) {
        //     head->next = NULL;
        //     return head;
        // } 
        // else if(len==2 and n==1){
        //     return head->next;
        // }
        ListNode* prev = NULL;
        if(len-n == 0) return head->next;
        for(int i=0;i<(len-n);i++){
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        return head;
        
        
    }
    void calclength(ListNode* head){
        while(head){
            len++;head = head->next;
        }
    }
};