// Time Complexity: O(n log n)
// Space Complexity: O(log n)
struct ListNode* sortList(struct ListNode* head) {
    if(head==NULL || head->next==NULL)return head;
    struct ListNode *slow=head;
    struct ListNode *fast=head;
    struct ListNode *prev;
    while(fast && fast->next){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    prev->next=NULL;
    struct ListNode *left=sortList(head);
    struct ListNode *right=sortList(slow);
    struct ListNode dummy;
    struct ListNode *tail=&dummy;
    dummy.next=NULL;
    while(left && right){
        if(left->val<=right->val){
            tail->next=left;
            left=left->next;
        }else{
            tail->next=right;
            right=right->next;
        }
        tail=tail->next;
    }
    if(left){
        tail->next=left;
    }else{
        tail->next=right;
    }
    return dummy.next;
}