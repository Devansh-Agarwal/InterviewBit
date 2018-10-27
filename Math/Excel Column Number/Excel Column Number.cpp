

    int Solution::titleToNumber(string A) {
        int sum = 0, k = 0;
        for(int i = A.size() -1 ; i >= 0; i--)
        {
            sum+= (A[i]-'A'+1) * pow(26,k);
            k++;
        }
        return sum;
    }

