/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * tempA = headA, *tempB=headB;
        if(tempA == NULL || tempB == NULL)
            return NULL;
        else if (tempA == tempB)
            return tempA;
        while(tempA != NULL ){
            tempB = headB;
            while(tempB != NULL){
                if(tempA == tempB)
                    return tempA;
                tempB = tempB->next;
                
            }
            tempA = tempA->next;
        }
        return NULL;
    }
};