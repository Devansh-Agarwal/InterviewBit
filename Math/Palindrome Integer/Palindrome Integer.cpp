int Solution::isPalindrome(int A) {
if(A<0)
return 0;
int temp =0, temp2= A;
int i = 0;
    while(temp2>0)
    {
        temp=temp*10 + temp2%10 ;
        temp2/=10;
    }
    if(temp == A)
        return 1;
    return 0;    
}
