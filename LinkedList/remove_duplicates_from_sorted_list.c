// Time Complexity: O(n)
// Space Complexity: O(1)
struct ListNode* deleteDuplicates(struct ListNode* head) {
if(head == NULL || head->next == NULL){
        return head;
}
struct ListNode* prev = head ;
struct ListNode* temp = head->next;
while(temp != NULL){
    if(prev->val == temp->val){
        prev->next = temp->next;
        free(temp);
        temp = prev->next;
    }
    else{
        prev = temp;
        temp = temp->next;
    }
}
return head;
}