/*
 * @lc app=leetcode id=2181 lang=cpp
 *
 * [2181] Merge Nodes in Between Zeros
 */

// @lc code=start
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
    ListNode* mergeNodes(ListNode* head) {
        auto start = head;
        auto end = head->next;
        while(end){
            int sum=0;
            while(end->next->val!=0){
                sum+=end->val;
                end = end->next;
            }
            sum+=end->val;
            start-> next = new ListNode(sum);
            start->next->next=end->next->next;
            end = end->next->next;
            start = start->next;
        }
    return head->next;
    }
    
};
// @lc code=end

