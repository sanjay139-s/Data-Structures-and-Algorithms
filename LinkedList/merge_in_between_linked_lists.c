// Time Complexity: O(n + m)
// Space Complexity: O(1)
struct ListNode* mergeInBetween(struct ListNode* list1,int a,int b,
 struct ListNode* list2) {

    int count = 0;

    struct ListNode* head = list1;
    struct ListNode* demo = NULL;
    struct ListNode* prev = NULL;
    struct ListNode* tail = list2;

    while(list1){

        if(count == a - 1){
            demo = list1;
        }

        if(count == b + 1){
            prev = list1;
            break;
        }

        list1 = list1->next;
        count++;
    }

    demo->next = list2;

    while(tail->next){
        tail = tail->next;
    }

    tail->next = prev;

    return head;
}