string Solution::longestCommonPrefix(vector<string> &A) {

int  min = 1;
if(A.size() == 1)
return A[0];
string ans = "";
    for(int i =0; i< A.size(); i++)
    {
        if(min> A[i].size())
         min = A[i].size();
    }
    for(int i = 0; i< min ; i++)
    {
        for(int j = 0; j< A.size()-1; j++)
        {
            if(A[j][i] != A[j+1][i])
                return ans;
        }
        ans +=A[0][i];
    }
    return ans;
}
