// Time Complexity: O(n)
// Space Complexity: O(1)
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
   int count=0;
    struct ListNode*prev=head;
    while(prev!=NULL){
        count++;
        prev=prev->next;

    }
    if(count==n){
        return head->next;
    }
    int i=1;
    struct ListNode*res=head;
    while(res!=NULL&& res->next!=NULL){
        if(i==count-n){
            res->next=res->next->next;
            return head;
        }
        res=res->next;
        i++;
    }
    return head;
}