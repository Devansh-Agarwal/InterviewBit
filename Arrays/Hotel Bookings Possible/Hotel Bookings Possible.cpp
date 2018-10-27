bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {

 sort(arrive.begin(),arrive.end());
 sort(depart.begin(),depart.end());
int i = 0, j =0, count = 0, time = 0;
while(i< arrive.size())
{
    if(arrive[i] < depart[j])
    {
        count ++;
        i++;
        if(count > K)
        return false;
        continue;
    }
    else if(arrive[i] > depart[j])
        {
        count --;
        j++;
        continue;
    }
    else if(arrive[i] == depart[j])
        {
            i++;j++;
        }
}
return true;
}
