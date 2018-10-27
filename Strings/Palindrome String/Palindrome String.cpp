int Solution::isPalindrome(string A) {
// if(A.size() == 0)
// return
    transform(A.begin(), A.end(), A.begin(), :: tolower);
    string B;
    for(int i = 0; i < A.size(); i ++)
    {
        if( ('0'<=A[i]&&A[i] <= '9')|| (A[i] >= 'a' && A[i] <= 'z'))
            {
                B.push_back(A[i]);
            }
    }
    if(B.size() == 0)
    return 1;
    for(int i =0; i <=(B.size()-1)/2; i++)
    {
        if(B[i] != B[B.size() -1 - i])
            return 0;
    }
    return 1;
}
