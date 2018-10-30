int st(vector<int>& dp, int n)
{
    if(n<0)
    return 0;
    if(n == 0 || n == 1)
     return 1;
    if(dp[n]!=-1)
    return dp[n];
     dp[n] = st(dp, n-1) + st(dp, n-2);
     return dp[n];
}
int Solution::climbStairs(int A) {
vector<int> dp(A+1, -1);
return st(dp,A);
    
}
