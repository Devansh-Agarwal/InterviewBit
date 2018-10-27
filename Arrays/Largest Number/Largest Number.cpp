bool compare(string a, string b)
{
    return a+ b < b+a;
}
string Solution::largestNumber(const vector<int> &A) {
vector<string> str;
for(int a: A)
 str.push_back(to_string(a));
 string ans = "";
 sort(str.begin(), str.end() , compare);
 for(int i = str.size() -1; i >= 0 ; i --)
    ans+= str[i];
bool f = false;
for(int i = 0; i< ans.size() ; i++)
{
    if(ans[i] !='0')
        f= true;
}
if(f)
return ans;
else
return "0";
}
