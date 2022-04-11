//linked list remove nth node from last
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode* fast=head,slow = head;
      for(int i=0;i<n;i++) fast = fast->next;
      if(fast == NULL) return head->next;
      
      //here fast->next not fast in while condition.
      while(fast->next) {
        slow = slow->next;
        fast = fast->next;
      }

      slow->next = slow->next->next;
      return head;

    }
};









class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        auto temp = head;
        int size= 0;
        while(temp){
            temp=temp->next;
            size++;
        }
      //base cases  
      if(size==1)
            return NULL;
        if(size==n)
          return head->next;
        
        int rem = size - n;
        temp  = head;
        
        
        for(int i=0;i<rem-1;i++){
            temp =temp->next;
        }
        
        temp->next = temp->next->next;
        return head;
       
    }
};
