/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    
    if(head == NULL) return head;
    if(head->next == NULL) return head;
    struct ListNode *tmp = head->next;  

    while (tmp->next != NULL){
        
        if(head->val == tmp->val){
            head = tmp;
            tmp = tmp->next;
        }
        else{
            break;
        }
    }
   
    while(tmp->next != NULL){

        if(tmp->val == tmp->next->val){
            tmp->next = tmp->next->next;
        }
        else{
            tmp = tmp->next;
        }

    }

     if(head->val == tmp->val){
        return head->next;
    }

    return head;
}