// Time Complexity: O(1)
// Space Complexity: O(1)
void deleteNode(struct ListNode* node) {
    node->val = node->next->val;
    node->next = node->next->next;
}