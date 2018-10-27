int Solution::maxSubArray(const vector<int> &A) {
int ans = INT_MIN, sum  =0;
for(int i = 0; i< A.size() ; i++)
{
    sum+= A[i];
    if(ans< sum)
        ans = sum;
    if(sum < 0)
        sum = 0;
    
}  
return ans;
}
