// Time Complexity: O(n)
// Space Complexity: O(1)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if(head==NULL ||  head->next==NULL) return head;
    struct ListNode *temp=head;
    struct ListNode *prev=temp;
    int len=0;

        while(temp){
            len++;
            temp=temp->next;
        }
        k=k%len;
    for(int i=0;i<k;i++){
        temp=head;
        prev=temp;
        while(temp->next){
            prev=temp;
            temp=temp->next;
        }
         prev->next = NULL;
        temp->next = head;
        head = temp;
    }
    return head;
}