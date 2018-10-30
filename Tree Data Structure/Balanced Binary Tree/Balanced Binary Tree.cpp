/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int isbal(TreeNode * root, bool& flag)
 {
     if(root == NULL)
        return NULL;
    int l = isbal(root->left, flag);
    int r = isbal(root->right, flag);
    if(abs(l-r) > 1)
        flag = false;
        return max(l,r)+1;
 }
int Solution::isBalanced(TreeNode* A) {
    bool flag = true;
    isbal(A, flag);
    if(flag)
        return 1;
        else
        return 0;
    
}
