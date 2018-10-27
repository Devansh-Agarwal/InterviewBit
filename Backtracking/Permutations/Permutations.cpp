void help(vector<vector<int>> &val,vector<int> &A, vector<bool> visit , vector<int> temp)
{
    if(temp.size() == A.size())
    {
        val.push_back(temp);
        return;
    }
    for(int i = 0; i < A.size(); i++)
    {
        if(visit[i] == true)
            continue;
        visit[i] = true;
        temp.push_back(A[i]);
        help(val, A, visit, temp);
        temp.pop_back();
        visit[i] = false;
    }
}
vector<vector<int> > Solution::permute(vector<int> &A) {

vector<bool> visit(A.size(), false);
vector<vector<int>> val;
vector<int> temp;

help(val, A, visit, temp);
return val;
    
}
