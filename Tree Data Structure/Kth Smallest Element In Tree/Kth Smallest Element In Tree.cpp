/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void h(TreeNode * a, int& B, int& ans, int & c)
 {
     if(a == NULL)
     return;
     h(a->left, B, ans,c);
     c++;
     if(c == B)
      ans = a->val;
     h(a->right,B,ans,c); 
 }
int Solution::kthsmallest(TreeNode* A, int B) {
 
    int ans = 0,c = 0;
    h(A,B,ans,c);
    return ans;
    
}