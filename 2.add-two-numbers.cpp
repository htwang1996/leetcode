/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/*
这里的两个链表数据相加问题可不是那么简单，主要有一下几种情况

1、如果两个链表长度是一样的，就将链表中的元素相加输出即可

2、如果两个链表的长度不是一样的,null的链表新建node 值为（进位+不为零链表的值）

3、如果两个链表长度一样长，但是在最后一个元素相加出现了进位，那么就需要在最后一个链表上在添加一个链表，
*/
class Solution {
public:
    int add = 0;
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        if (l1 == NULL && l2 ==NULL && add ==0)
           return NULL;
        if (l1 == NULL && l2 ==NULL && add ==1)
            {
                l1 =new struct ListNode(add);
                add = 0;
            }
        if(l1 == NULL && l2 !=NULL)
        {
            l1 = new struct ListNode((l2->val)+add);
            if (l1 -> val >= 10)
            {
                add =1;
                l1 -> val =l1 -> val%10;
            }
            else
               {
                   add =0;
               }
            l1 -> next = addTwoNumbers(l1 -> next,l2 -> next);
            return l1;
        }
           
        if(l1 != NULL && l2 ==NULL)
           {
               l2 = new struct ListNode((l1->val) +add);
               if (l2 -> val >= 10)
            {
                add =1;
                l2 -> val =l2 -> val%10;
            }
            else
               {
                   add =0;
               }
               l2 -> next = addTwoNumbers(l1 -> next,l2 -> next);
            return l2;
           };
        if(l1 != NULL && l2 !=NULL )
        {
            l1->val = l2->val + l1->val +add;
            if (l1 -> val >= 10)
            {
                add =1;
                l1 -> val =l1 -> val%10;
            }
            else
               {
                   add =0;
               }
            l1 -> next = addTwoNumbers(l1 -> next,l2 -> next);
        }
        
        return l1;      
    } 
};

