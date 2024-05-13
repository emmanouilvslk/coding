/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    
    struct ListNode* first = NULL, *last = NULL;
    struct ListNode* new;
    int sum = 0;

    if(new == NULL){
        return NULL;
    }
    
    while(l1 || l2 || sum !=0 ){

        struct ListNode* new = (struct ListNode* )  malloc( sizeof(struct ListNode));
        

        if(new == NULL){
            return NULL;
        }

        if(l1){
            sum+= l1->val;
            l1 = l1->next;
        }

        if(l2){
            sum+= l2->val;
            l2 = l2->next;
        }
        
        new->val = sum % 10;
        new->next = NULL;


        if(last){
            last->next = new;
        }
        else{
            first = new;
        }

        last = new;
        sum = sum/10;

    }

    return first;


}