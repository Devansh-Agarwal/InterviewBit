string Solution::addBinary(string A, string B) {
    string a,b;
    string ans;
    int min =0, carry  =0;
    if(A.size() > B.size())
    {
            a = B;
            min = a.size();
            b = A;    
        
    }
    else
    {  
            a = A;
            min = a.size();
            b = B;  
        
    }
    while(a.size() < b.size())
    {
        a.insert(0,to_string(0));
    }
    for(int i = a.size()-1 ; i>= 0 ; i--)
    {
        if(a[i] == '0' && b[i] == '0')
        {
            if(carry == 1)
            {
                ans.insert(0, to_string(1) );
                carry = 0;
                
            }
            else
            ans.insert(0, to_string(0) );
            continue;
        }
        if((a[i] == '1' && b[i] == '0') ||(a[i] == '0' && b[i] == '1'))
        {
            if(carry == 1)
            {
                ans.insert(0,to_string(0));
                carry = 1;
                
            }
            else
            ans.insert(0, to_string(1) );
            continue;
        }
        if(a[i] == '1' && b[i] == '1')
        {
            if(carry == 1)
            {
                ans.insert(0, to_string(1));
                carry = 1;
                
            }
            else
            {
                ans.insert(0, to_string(0) );
                carry = 1;
                
            }
            continue;
        }
    }
    if(carry == 1)
        ans.insert(0,to_string(1));
        
    for(int i =0 ; i< ans.size() ; i++)
    {
        if(ans[i] == 0)
            ans.erase(0);
        else
        break;
    }
        
        
        return ans;
    
    
}
