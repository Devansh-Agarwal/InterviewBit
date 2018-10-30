/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void help(TreeNode* a, int B , int sum, bool& flag)
 {
     if( a == NULL || flag )
     return ;
     sum+= a->val;
     if(sum == B)
     {   flag = true;
        return ;
     }
     help(a->left, B, sum, flag);
     help(a->right, B, sum, flag);
 }
int Solution::hasPathSum(TreeNode* A, int B) {
    bool flag = false;
    help(A,B,0,flag);
    if(flag)
        return 1;
        else
        return 0;
    
}
