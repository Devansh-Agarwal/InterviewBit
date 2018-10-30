    **
     * Definition for binary tree
     * struct TreeNode {
     *     int val;
     *     TreeNode *left;
     *     TreeNode *right;
     *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
     * };
     */
     void ma(TreeNode *a, int d, int&ans)
     {
         if(a == NULL)
         return ;
         d++;
         if(d> ans)
          ans = d;
          ma(a->left,d,ans);
          ma(a->right,d,ans);
     }
    int Solution::maxDepth(TreeNode* A) {
    int ans = 0;
    ma(A,0, ans);
    return ans;
        
    }

