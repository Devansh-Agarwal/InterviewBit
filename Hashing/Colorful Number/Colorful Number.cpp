int Solution::colorful(int A) {

    set<int> s; 
     long long int mul = 1;
    string a  = to_string(A);
    for(int i = 0; i< a.size(); i++)
    {
        mul = 1;
        for(int j = i; j< a.size(); j++)
        {
            mul *= (int)(a[j]- '0');
            if(s.find(mul) != s.end() )
                return 0;
            else
             s.insert(mul);
            
        }
    }
    return 1;
    
}
