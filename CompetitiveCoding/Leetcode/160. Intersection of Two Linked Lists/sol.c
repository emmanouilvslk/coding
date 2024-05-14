/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    
    struct ListNode *first = headA;
    if(headA == NULL || headB ==NULL){
        return NULL;
    }
    else{
        while(headB){
            while(headA){
                 if(headA == headB){
                    return headA;
                 }
                 else if( headA->next){
                    headA= headA->next;
                 }
                 else{
                    break;
                }
            }
            if(first){
                headA = first;
            }
            headB = headB->next;
        }
    }
    return NULL;
}