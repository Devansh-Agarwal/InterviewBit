int Solution::bulbs(vector<int> &A) {

    int ans = 0;
    for(int i = 0 ; i < A.size(); i++)
    {
        if((A[i] == 0 && ans%2 == 0) || (A[i] == 1&& ans%2 ==1))
        {
            ans++;
        
        }
    }
    return ans;
}
