/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void h(TreeNode* a, vector<long long int>& v, long long int num)
 {
     if(a==NULL)
      return;
     num = num*10 + a->val;
     //num = num %1003;
     if(a->left == NULL && a-> right == NULL)
        v.push_back(num%1003);
    h(a->left,v,num);
    h(a->right,v,num);
 }
int Solution::sumNumbers(TreeNode* A) {
vector< long long int> v;
h(A,v,0);
long long int ans = 0;
for( long long int z:v)
    ans+= z;
    return ans%1003;
    
}
