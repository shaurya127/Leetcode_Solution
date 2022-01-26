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
        auto p1=headA;
        auto p2=headB;
        unordered_map<ListNode*,int>mp;
        while(p1!=NULL){
            mp[p1]++;
            p1=p1->next;
        }
        while(p2){
            if(mp.count(p2))return p2;
            p2=p2->next;
        }
        return NULL;
    }
};