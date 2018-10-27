/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    if(B == 0 || A ==NULL)
    return A;
    ListNode* end;
    int count = 0;
    for(ListNode* temp = A; temp!=NULL; temp = temp->next)
    {
        count ++;
        end =temp;
    }
    end->next = A;
    
    B= B%count;
    B = count- B +1;
    int  i =0;
    for(ListNode * temp = A; i != B  ; temp = temp -> next  )
    {
        i++;
        if( i == B)
        {
            A =temp-> next;
            temp->next = NULL;
        }
    }
    return A;
}
