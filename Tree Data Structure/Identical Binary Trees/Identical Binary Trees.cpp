    **
     * Definition for binary tree
     * struct TreeNode {
     *     int val;
     *     TreeNode *left;
     *     TreeNode *right;
     *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
     * };
     */
     void issame(TreeNode* a,TreeNode* b, bool&flag )
     {
         if(a==NULL && b == NULL)
         return;
         if(a== NULL)
            { flag = false; return;}
        if(b == NULL){flag = false; return;}
        if(b->val != a->val )
        {flag = false; return;}
        issame(a->left, b->left, flag);
            issame(a->right, b->right, flag);
     }
    int Solution::isSameTree(TreeNode* A, TreeNode* B) {
    bool flag = true;
    issame(A,B,flag);
        return flag;
    }

