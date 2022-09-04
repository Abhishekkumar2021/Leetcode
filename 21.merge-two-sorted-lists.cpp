/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
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
    void insert(ListNode* &head, ListNode* &tail, int data){
        if(head==NULL){
            head = new ListNode(data);
            tail = head;
        }else{
            ListNode* newNode = new ListNode(data);
            tail->next = newNode;
            tail = newNode;
        }
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = NULL;
        ListNode* tail = NULL;
        while(list1 && list2){
            if(list1->val<list2->val){
                insert(head,tail,list1->val);
                list1 = list1->next;
            }else{
                insert(head,tail,list2->val);
                list2 = list2->next;
            }
        }
        while(list1){
            insert(head,tail,list1->val);
            list1 = list1->next;
        }
        while(list2){
            insert(head,tail,list2->val);
            list2 = list2->next;
        }
        return head;
    }
};
// @lc code=end

