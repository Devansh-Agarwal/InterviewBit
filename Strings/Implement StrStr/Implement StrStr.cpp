int Solution::strStr(const string a, const string b) {
string A = b, B = a;
bool f = true, cc = false;
if(A.size() == 0 && B.size() == 0)
return -1;
if(A.size() == 0)
return 0;
for(int i = 0 ; i < B.size(); i++)
{
    for(int j = 0; j < A.size() &&  A.size()<= (B.size() - i); j++)
    {
         cc =true;
        if(A[j] != B[j+i])
        {
            f = false;
            break;
        }
        
    }
    if(f && cc)
    return i;
    f = true;
    cc = false;
    
}
    
    return -1;
}
