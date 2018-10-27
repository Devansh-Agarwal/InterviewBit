/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) {
if(A == NULL )
    return 1;
int count = 0 , i = 0;
    for(ListNode * temp = A; temp!= NULL ; temp= temp->next)
    {
        count ++;
    }
    if(count == 1) 
    return  1;
    if(count%2 == 0)
        i = count/2 +1;
    else
    i = count/2 + 2;
    ListNode * j = NULL;
    int z = 0;
    for( ListNode * temp = A; temp!= NULL&& z!= i ; temp= temp->next )
    {
        z++;
        j = temp;
    }
    ListNode * prev= NULL, *next;
    for(ListNode * curr = j; curr != NULL; )
    {
        next = curr->next;
        curr->next = prev;
        prev = curr ;
        curr = next;
    }
    j = prev;
    while(A!= NULL && j!= NULL)
    {
        if(A->val != j->val)
            return 0;
        A = A->next;
        j = j->next;
    }
    return 1;
        
}
