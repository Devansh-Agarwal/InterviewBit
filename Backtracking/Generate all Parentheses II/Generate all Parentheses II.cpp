void help (vector<string>& par, int a, string temp, int l ,int r)
{
    if(temp.size() == a *2)
    {
        par.push_back(temp);
        return;
    }
    if(l <a)
    {

        help(par, a, temp + '(', l+1, r);
        
    }
    if(r<l)
    {
        help(par, a, temp + ')', l, r + 1);
    }
    
}


vector<string> Solution::generateParenthesis(int A) {
vector<string> par ;
help(par, A, "", 0,0);
return par;
    
}
