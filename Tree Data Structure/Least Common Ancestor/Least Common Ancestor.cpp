/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 TreeNode * h(TreeNode*a, int b, int c, bool&v1, bool& v2)
 {
     if(a == NULL)
     return NULL;
     if(a->val  == b)
    {
        v1 = true;
        return a;
    }
    if(a->val == c)
    {
        v2 = true;
        return a;
    }
    TreeNode * y = h(a->left,b,c,v1,v2);
    TreeNode * z = h(a->right,b,c,v1,v2);
    if(y&&z)
    return a;
    return y == NULL? z:y;
 }
 bool find(TreeNode * a, int b)
 {
     if(a == NULL)
     return false;
     if(a->val == b || find(a->left,b) || find(a->right,b))
        return true;
 }
int Solution::lca(TreeNode* A, int B, int C) {
bool v1 = NULL, v2 = NULL;
TreeNode* ans = h(A,B,C,v1,v2);
if(v1&&v2||v1&&find(A,C)||v2&&find(A,B))
{
    return ans->val;
}
return -1;
    
}
