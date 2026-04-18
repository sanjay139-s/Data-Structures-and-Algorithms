// Time Complexity: O(n)
// Space Complexity: O(1)

struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode *curr=head;
    int count=0;
    while(curr!=NULL){
        count++;
        curr=curr->next;
    }
    int mid=count/2;
    int i=0;
    struct ListNode *prev=head;
    struct ListNode *res;
    while(i<mid){
        prev=prev->next;
        i++;
    }
    return prev;
}