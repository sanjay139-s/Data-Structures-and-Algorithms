// Time Complexity: O(n)
// Space Complexity: O(n)
bool isPalindrome(struct ListNode* head) {
    int arr[1000001];
    int i = 0;
    while(head != NULL){
        arr[i] = head->val;
        head = head->next;
        i++;
    }
    for(int j = 0; j < i / 2; j++){
        if(arr[j] != arr[i - 1 - j]){
            return false;
        }
    }
    return true;
}