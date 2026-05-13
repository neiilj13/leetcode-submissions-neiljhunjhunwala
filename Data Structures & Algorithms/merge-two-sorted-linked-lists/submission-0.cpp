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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode merged;
        ListNode* merge=&merged;
        ListNode* current1=list1;
        ListNode* current2=list2;
        while(current1!=nullptr && current2!=nullptr)
        {
            if(current1->val>current2->val)
            {
                merge->next=current2;
                current2=current2->next;
            }
            else
            {
                merge->next=current1;
                current1=current1->next;
            }
            merge=merge->next;
        }
        if(current1 != nullptr)
        {
            merge->next = current1;
        }
        if(current2 != nullptr)
        {
            merge->next = current2;
        }
        return merged.next;
    }
};
