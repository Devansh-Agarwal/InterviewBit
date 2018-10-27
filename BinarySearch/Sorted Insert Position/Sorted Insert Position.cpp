int Solution::searchInsert(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
int l =0, h = A.size()-1, m = 0, ans = -1;
if(B <= A[0])
    return 0;
if(B > A[h])
    return h+1;    
while(l<= h)
{
    m  = l + (h-l)/2;
    if(A[m] == B)
        return m;
        if(A[m]> B)
        {
            ans = m ;
            h = m -1;
        }
        else
        {
            ans = m+1;
            l = m +1;
        }
        
}
return ans;
    
}
