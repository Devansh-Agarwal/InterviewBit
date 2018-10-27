int Solution::lengthOfLastWord(const string A) {

int count = 0, max = 0;
bool flag = false;

    for(int i = 0; i < A.size() ; i ++)
    {
        if(A[i] == ' ')
        {
            if(count > max)
                max =count ;
                count = 0;
        
            continue;
        }
        count ++;
    }

    return count;
}
