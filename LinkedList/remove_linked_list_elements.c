// LeetCode 203: Remove Linked List Elements
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(1)
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode dummy;
    dummy.next = head;

    struct ListNode* prev = &dummy;
    struct ListNode* curr = head;

    while (curr != NULL) {
        if (curr->val == val) {
            prev->next = curr->next;
        } else {
        
            prev = curr;
        }
        curr = curr->next;
    }
    return dummy.next;
}
