/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 ListNode* merge(ListNode * h1, ListNode * h2)
 {
     if(h1 == NULL)
        return h2;
    if(h2 == NULL)
    return h1;
    if(h1->val < h2->val)
    {
        h1->next = merge(h1->next, h2);
        return h1;
    }
    else
    {
        h2->next = merge(h1, h2->next);
        return h2;
    }
        
 }
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
// ListNode * i , *j , * k;
// if( A->val<B->val)
// {
//     k = A;
//     i = A;
//     j = B;
// }
// else
// {
//     k = B;
//     i = B;
//     j = A;
// }
// ListNode* prev;
// while(i != NULL && j!= NULL)
// {
//     if(i->val <j->val )
//     {
//         prev = i;
//         i = i->next;
//         continue;
//     }
//     else
//     {
//         prev->next = j;
//         j = i;
//         i = j;
//     }
    

 
    
// }
//         i-> next = j;
//         return k;

    return merge(A,B);
}
