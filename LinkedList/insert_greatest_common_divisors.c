// Time Complexity: O(n * log m)
// Space Complexity: O(1)

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;  
        a = temp;
    }
    return a;
}
struct ListNode* insertGreatestCommonDivisors(struct ListNode* head) {
    if(head==NULL || head->next==NULL) return head;
    struct ListNode *temp=head;
    int a,b,res;
    while(temp && temp->next){
        a=temp->val;
        b=temp->next->val;
        struct ListNode* rest = (struct ListNode*)malloc(sizeof(struct ListNode));
        res=gcd(a,b);
        rest->val=res;
        rest->next = temp->next;
        temp->next = rest;
        temp = rest->next;
    }
    return head;
}