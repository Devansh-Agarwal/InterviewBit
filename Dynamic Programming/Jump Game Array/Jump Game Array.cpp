void h(vector<int>&a, int i,int c, int& f )
{
    if(i == 0 && a[i] - (c-i) >0)
     f = 1;
    if( i == 0)
        return;
    if(a[i]-(c-i)>=0)
    {
        c =i;
    }
    h(a, i-1, c, f);
}
int Solution::canJump(vector<int> &A) {
int f = 0;
if(A.size() <=1)
return 1;
h(A, A.size()-2, A.size()-1,f);
return f;
    
}
