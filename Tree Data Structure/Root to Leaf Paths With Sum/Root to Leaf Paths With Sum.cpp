/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
  void h(TreeNode* a, vector< int> v, int num, int&B, vector<vector<int>> & ans)
 {
     if(a==NULL)
      return;
     num = num + a->val;
     //num = num %1003;
     v.push_back(a->val);
     if(a->left == NULL && a-> right == NULL && num == B)
        ans.push_back(v);
    h(a->left,v,num,B,ans);
    h(a->right,v,num, B, ans);
 }
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
vector<vector<int>> ans;
vector<int> temp;
h(A,temp,0,B,ans);
return ans;
    
}
