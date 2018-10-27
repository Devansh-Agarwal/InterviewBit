
void sss(string& A,vector<string>& s, vector<string>& alpha, int i, string temp)
{
    if(i == A.size())
      {
          s.push_back(temp);
        return;
       }
      char c = A[i];
      int t  = c - '0';
        if (t == 0)
        {
                        temp += '0';
            sss(A,s,alpha, i+1, temp );
        return;
            
        }
        if(t == 1)
        {
                        temp += '1';
            sss(A,s,alpha, i+1, temp );
        return;
            
        }
        t -=2;

     for(int k = 0; k < alpha[t].size(); k++)
        {
            temp += (alpha[t])[k];
            sss(A,s,alpha, i+1, temp );
            temp.pop_back();
        }
    
}
vector<string> Solution::letterCombinations(string A) {
vector<string> alpha ={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};


vector<string> s;
string temp = "";
sss(A,s,alpha,0, temp);

sort(s.begin(), s.end());
return s;

    
}
