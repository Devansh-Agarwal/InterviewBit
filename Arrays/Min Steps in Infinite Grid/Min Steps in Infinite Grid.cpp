int Solution::coverPoints(vector<int> &A, vector<int> &B) {
int steps = 0,  j= 0 ,k = 0;

for(int i = 1;i < A.size(); i ++)
{
        j = A[i] - A[i-1];    
        k = B[i] - B[i-1];
        j = abs(j);
        k  = abs(k);
        steps+= j>k? j:k;
}

return steps;
    
}
