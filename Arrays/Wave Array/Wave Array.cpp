vector<int> Solution::wave(vector<int> &A) {
sort(A.begin(), A.end());
int temp ;
for(int i =0; i < A.size() -1; i +=2)
{
    temp = A[i] ;
    A[i]  = A[i+1];
    A[i+1]  = temp;
}
return A;
    
}
