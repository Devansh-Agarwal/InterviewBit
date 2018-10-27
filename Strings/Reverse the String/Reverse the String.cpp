void Solution::reverseWords(string &A) {
vector<string> ans;
string temp;
for(int i = 0; i < A.size() ; i++)
{
    if(A.size() == 0)
    return;
    if(A[i] == ' ' && temp.size() !=0)
    {
        ans.push_back(temp);
        temp.clear();
        continue;
        
    }
    temp += A[i];
    if( i == A.size() -1)
    {
        ans.push_back (temp);
    }
    
}
A.clear();
    A += ans[ans.size() -1];
    for(int i = ans.size() -2;i>= 0; i--)
    {
        A += ' ' + ans[i];
    }
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
