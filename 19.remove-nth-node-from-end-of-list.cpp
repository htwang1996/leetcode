/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
 */

// @lc code=start
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == nullptr || n == 0) 
            return head;
        ListNode* pFast = head;
        ListNode* pSlow = head;
        //ListNode* pSlowBefore = nullptr;
        for(int i = 0;i<n;i++){
            if(pFast->next != nullptr){
                pFast = pFast->next;
            }
            else {
                return head->next;
            }
        }
        while(pFast->next != nullptr){
            pFast = pFast->next;
            //pSlowBefore = pSlow;
            pSlow = pSlow->next;
        }
        pSlow->next = pSlow->next->next;
        return head;

        
    }
};
// @lc code=end

