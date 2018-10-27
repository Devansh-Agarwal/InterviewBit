int Solution::findMinXor(vector<int> &A) {
    sort(A.begin(), A.end());
    int min = INT_MAX;
    for(int i = 0 ; i < A.size() -1 ; i++ )
    {
        if(abs(A[i]- A[i+1]) < min)
        {
            min = abs(A[i]- A[i+1]);
        }
    }
    //return min ;
    int xo = INT_MAX;
    for(int i = 0; i < A.size() - 1; i ++)
    {
        // if(abs(A[i]- A[i+1]) == min)
        {
            if((A[i]^A[i+1] )< xo )
            {
                xo = A[i]^A[i+1]; 
            }
        }
    }
    return xo;
}
