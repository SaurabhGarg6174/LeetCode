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
    ListNode* Reversell(ListNode* head){
        ListNode* prev = nullptr,* curr = head,* nxt;
        while(curr){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    ListNode* midll(ListNode* head){
        ListNode* slow = head, *fast = head, * prev;
        while(fast && fast->next){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if(prev) prev->next = nullptr;
        return slow;
    }   
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;
        ListNode* mid = midll(head), * temp1 = head, * temp2 = Reversell(mid);
        while(temp1 && temp2){
            ListNode* nxt1 = temp1->next, * nxt2 = temp2->next;
            temp1->next = temp2;
            if(nxt1) temp2->next = nxt1;
            temp1 = nxt1;
            temp2 = nxt2;
            
        }
    }
};