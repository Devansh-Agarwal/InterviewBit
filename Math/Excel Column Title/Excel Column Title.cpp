string Solution::convertToTitle(int A) {

    vector<int> temp;
    string ans ="";
    while(A>0)
    {
        int rem = A%26;
        temp.push_back(rem);
        if(rem == 0)
         A-=26;
        A/= 26;
    }
    for(int i = temp.size()-1 ; i>=0; i--)
    {
        if(temp[i]+'A' -1  == '@')
        {
            ans+= 'Z';
            continue;
        }
        ans+= (char)(temp[i]+'A' -    1);
    }
    return ans;
}
