bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 
int Solution::isPower(int b) {
    vector<int > factors, count;
    int i = 2;
    int A = b;
    if(A == 1)
    return 1;
    while(A>1)
    {
        while(A%i == 0)       
        {
            A /= i;
            if(find(factors.begin(), factors.end(),i) == factors.end())
            {
                factors.push_back(i);
                count.push_back(1);
            }
            else
            {
                count[count.size()-1]++;
            }
        }
        i++;
        
    }
    int min = INT_MAX;
    for(int j =0; j < count.size(); j++)
    {
        if(count[j] < min)
            min = count[j];
    }
    for(int k = 2; k<=min; k++)
    {
        for(int j =0; j< count.size(); j++)
        {
            if(count[j]%k !=0)
             break;
        }
        return 1;
    }
    return 0;
}