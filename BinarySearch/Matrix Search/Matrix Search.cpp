int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
int row = A.size()/2 , ans =0, l= 0  , h =A.size()-1 ;

while(l<= h)
{
    row = (l+h)/2;
   if(B >= A[row][0] &&  B<= A[row][A[row].size() -1])
   {
       return binary_search(A[row].begin(),A[row].end(), B);
   }
   if(B<= A[row][0])
    h = row-1;
    else 
     l = row +1;
}
return  0;    
}
