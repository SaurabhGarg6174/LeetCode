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
private:
    ListNode* findTail(ListNode* head){
        ListNode* tail = head;
        if(!head){
            return tail;
        }
        while(tail->next){
            tail = tail->next;
        }
        return tail;
    }
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* prev = list1, * tail, * temp;
        tail = findTail(list2);
        int i = b-a+1, j = a-1;
        while(j--){
            prev = prev->next;
        }
        temp = prev;
        while(i--){
            temp = temp->next;
        }
        prev->next = list2;
        tail->next = temp->next;
        return list1;
    }
};