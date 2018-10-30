/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* h (vector<int>&B,vector<int>&A, int s, int e, unordered_map<int,int>&mp,int &pi)

{
    
    if(s>e)
    return NULL;
    TreeNode* temp = new TreeNode(A[pi]);
    int in = mp[A[pi]];
        pi++;
    if(s==e)
    return temp;
    

    temp->left = h(B,A, s, in -1,mp, pi);
    temp->right = h(B,A, in+1, e,mp, pi);
    return temp;
}
 
TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {
if(A.size() == 0 || B.size() ==0)
return NULL;
unordered_map<int,int> mp;
for(int i =0; i < A.size(); i ++)
{
    mp[B[i]] = i;
}
int pi = 0;
return h(B,A,0,A.size()-1,mp,pi);

    
}
