// Time Complexity: O(n)
// Space Complexity: O(1)
struct ListNode* mergeNodes(struct ListNode* head) {
    struct ListNode* modified = head;
    struct ListNode* curr = head->next;
    while (curr != NULL) {
        if (curr->val != 0) {
            modified->val += curr->val;
        } else {
            if (curr->next != NULL) {
                modified->next = curr;
                modified = modified->next;
                //modified->val = 0;
            } else {
                modified->next = NULL;
            }
        }
        curr = curr->next;
    }
    return head;
}