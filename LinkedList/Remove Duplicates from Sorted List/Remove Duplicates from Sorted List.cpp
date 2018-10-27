/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
if(A == NULL)
    return A;
    ListNode * i = A, *temp;
    while(i != NULL)
    {
        temp = i->next;
        if(temp!= NULL)
        {
            if(i->val == temp -> val)
            {
                i->next = temp->next;
                delete temp;
                continue;
                
            }
            
        }
        i = i->next;
    }
    return A;
    
}
