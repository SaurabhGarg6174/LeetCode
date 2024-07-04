class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next; // Skip the initial 0 node
        ListNode* tempHead = temp; 
        while (temp != nullptr) {
            int tempS = 0;
            
            // Traverse until you find the next 0
            while (temp != nullptr && temp->val != 0) {
                tempS += temp->val;
                temp = temp->next;
            }
            
            // Now temp points to a node with value 0
            if (temp != nullptr) {
                tempHead->val = tempS; // Update the value of tempHead
                tempHead->next = temp->next; // Skip the 0 node
                tempHead = tempHead->next; // Move tempHead to the next node
                temp = temp->next; // Move temp to the next node
            }
        }
        return head->next; // Return the merged list starting from the first merged node
    }
};
