/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
bool ltr = true;
vector<vector<int>> ans;
if(A == NULL)
return ans ;
stack<TreeNode*> cl, nl;
cl.push(A);

vector<int> temp;
TreeNode * a;
while(!cl.empty())
{
    a= cl.top();
    cl.pop();
    if(a )
    {
    temp.push_back(a->val);
    if(ltr)
    {
        nl.push(a->left);
        nl.push(a->right);
    }
    else
    {
        nl.push(a->right);
        nl.push(a->left);
        
    }
    }
    if(cl.empty())
    {
        ltr = !ltr;
        if(temp.size()
        ans.push_back(temp);
        temp.clear();
        swap(cl,nl);
    
    }
}
return ans;
    
}
