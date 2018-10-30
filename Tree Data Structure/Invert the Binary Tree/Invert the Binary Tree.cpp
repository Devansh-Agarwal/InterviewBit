/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void help(TreeNode*& root )
 {
     if(root == NUll)
        return ;
     help(root->left);
     help(root-> right);
     TreeNode * temp = root->left;
     root->left = root->right;
     root->right = temp;
     return;
     
 }
TreeNode* Solution::invertTree(TreeNode* A) {
help(A);
return A;
    
}
