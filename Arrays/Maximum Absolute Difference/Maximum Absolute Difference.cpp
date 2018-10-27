int Solution::maxArr(vector<int> &A) {
    int ans = 0;
    int temp = 0;
    for(int i = 0; i < A.size(); i++)
    {
        for(int j = i +1; j< A.size() ; j++)
        {
            temp = abs(A[i] - A[j]) + abs(i - j);
            if(ans < temp)
             ans = temp;
        }
    }
    
    return ans;
}
s