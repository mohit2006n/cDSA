

struct ListNode* rotateRight(struct ListNode* head, int k) {
    int l = 0;
    struct ListNode *temp, *pos;
    temp = head;
    while (temp != NULL){
        l++;
        temp = temp -> next;
    }
    if (head == NULL || head -> next == NULL)
        return head;
    for (int i = 1; i<=k%l; i++){
        temp = head;
        while (temp -> next != NULL){
            temp = temp -> next;
            pos = temp;
        }
        temp -> next = head;
        head = pos;
        while (temp -> next != pos){
            temp = temp -> next;
        }
        temp -> next = NULL;
    }
    return head;
}