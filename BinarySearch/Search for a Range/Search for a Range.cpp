int fish(const vector<int> &A, int B, bool fl)
{
    int l = 0, h = A.size()-1, fa = -1, mid = 0;
    while(l<=h)
    {
        mid = l + (h-l)/2;
        if(A[mid] == B)
        {
            fa = mid;
            if(fl)
            h= mid -1;
            else
            l = mid + 1;
            continue;
        }
        if(A[mid] > B)
        {
            h  = mid -1;
        }
        else
        {
            l = mid + 1;
        }
        
    }
    return fa;
    
}
vector<int> Solution::searchRange(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
vector<int> ans(2, -1);
ans[0] = fish(A, B, true);
ans[1] = fish(A, B, false);
return ans;    
}
