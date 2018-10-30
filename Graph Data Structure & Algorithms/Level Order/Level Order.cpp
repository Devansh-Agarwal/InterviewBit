/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void h( TreeNode * a, vector<vector<int>>& ans, int d)
 {
     if(a == NULL)
      return ;
     d++;
     if(ans.size() < d)
     {
         vector<int> temp;
         temp.push_back(a->val);
         ans.push_back(temp);
     }
     else
     {
         ans[d-1].push_back(a->val);
     }
     h(a->left, ans, d);
     h(a->right, ans, d);
 }
vector<vector<int> > Solution::levelOrder(TreeNode* A) {
vector<vector<int> >ans;
h(A,ans,0);
return ans;
    
}
