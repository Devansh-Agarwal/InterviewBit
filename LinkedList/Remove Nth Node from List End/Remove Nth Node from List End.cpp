/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    int count  =0 ;
    if(A == NULL)
     return A;
    for(ListNode* temp = A; temp!= NULL;  temp =temp-> next)
    {
        count ++;
    }
    if(count < B)
        return A->next;
    int i  = count - B +1 , k =0;
     
    ListNode * prev = A  ;
    if(count == B)
    return A->next;
    for(ListNode* temp = A; temp!= NULL;  temp =temp-> next)
    {
         k++;
        if(k == i)
         {
             prev->next = (temp->next);
             break;
         }
         prev = temp;
         
    }
    return A;
}
