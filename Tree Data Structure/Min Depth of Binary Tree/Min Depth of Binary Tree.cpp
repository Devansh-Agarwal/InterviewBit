/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void md(TreeNode * a, int dp, int& ans)
 {
     if(a == NULL)
     {
        
        return;
     }
     dp++;
     if(dp<ans && a->right == NULL && a->left == NULL)
        ans = dp;
     md(a->left, dp , ans);
     md(a->right, dp , ans);
 }
int Solution::minDepth(TreeNode* A) {
int ans = INT_MAX;
md(A, 0, ans);
return ans;
    
}
