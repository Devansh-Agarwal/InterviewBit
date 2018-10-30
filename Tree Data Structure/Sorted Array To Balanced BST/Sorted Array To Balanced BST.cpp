/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
  void hl(TreeNode*& root, int l, int h, const vector<int> & a);
  void hr(TreeNode*& root, int l, int h, const vector<int> & a)
 {
     int m = h + (l- h)/2;
     if(l> h )
        return;
    TreeNode * z  =  new TreeNode(a[m]);
    root->right = z;
    hl(z,l,m-1, a);
    hr(z,m+1,h, a);
     
 }
  void hl(TreeNode*& root, int l, int h, const vector<int> & a)
 {
     int m = h + (l- h)/2;
     if(l> h )
        return;
    TreeNode * z  =  new TreeNode(a[m]);
    root->left = z;
    hl(z,l,m-1,a);
    hr(z,m+1,h, a);
     
 }
TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
if(A.size() == 0)
 return NULL;
int l = 0, h = A.size() -1 , m = (l+h)/2;
TreeNode* root = new TreeNode(A[m]);
hl(root,l, m-1, A);
hr(root,m+1, h, A);
  return root;  
}
