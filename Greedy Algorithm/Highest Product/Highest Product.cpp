int Solution::maxp3(vector<int> &A) {
    sort(A.begin(),A.end());
    int a =A[A.size()-1], b=  A[A.size()-2], c =A[A.size()-3];
    if(a*b*c < 0)
        return a * b* c;
    if((b*c)<(A[0]*A[1])  && b<0 && c <0)
    {
        b = A[0] ; c = A[1];
    }
    return a*b*c;
    
}
