vector<int> Solution::plusOne(vector<int> &B) {
int carry = 0 ;
int temp = 0;
vector <int> A;
A.reserve(B.size());
bool flag = true;
for(int i =0 ; i< B.size() ; i++  )
{
    
    if((flag&& B[i] == 0) && B.size()> 1)
        continue;
    A.push_back(B[i]);
    flag = false;
    
}

int k = A.size() -1;
flag = false;
int z =B.size() -1;
for(int i = k; i>= 0; i --, z-- )
{
    
    if(i == k)
    temp = B[z] + 1 + carry;
    else
    temp = B[z]  + carry;
    carry = 0;
    if(temp >9)
    {
        carry = 1;
        temp = temp%10;
    }
    
    A[i] = temp;
    if(i == 0 && carry == 1)
    {
         A.insert(A.begin(), 1);
    }
    
    
}
return A;
    
}
