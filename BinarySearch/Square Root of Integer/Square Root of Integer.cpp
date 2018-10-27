int Solution::sqrt(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
int l = 1, h = A, m =0,ans = 0;
if (A == 0)
return 0;
while(l<=h)
{
    m = l+ (h-l)/2;
    if(m == A/m)
    return m;
    if(m <A/m)
        {
            l = m+1;
            ans = m;
            
        }
    else
        h = m-1;
}
return ans;
    
}
