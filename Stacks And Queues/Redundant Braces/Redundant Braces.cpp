int Solution::braces(string A) {
stack<char> temp;
for(int i =0 ; i <A.size(); i++)
{
    bool flag = true;
    if(A[i] == ')' )
    {
        if(temp.top() == '(')
        return 1;
        while(temp.top() != '(')
         {
            if(temp.top() =='+'|| temp.top() =='*' ||temp.top() =='-' || temp.top() =='/' )
             flag = false;
             temp.pop();
         }
         if(flag)
         return 1;
         temp.pop();
        continue;
        
    }
    temp.push(A[i]);
}
return 0;
    
}
