vector<int> Solution::primesum(int A) {
 vector<bool> prime(A+1, true);
 vector<int> a;

 for(int i = 2 ; i <= sqrt(A); i ++)
 {
     if(prime[i])
     for(int j =2; j*i <=A; j++ )
     {
         prime[j*i] = false;
     }
 }

 for(int i = 2 ; i <= A/2 ; i+=1 )
 {
     if(prime[i] )
     if(prime[A-i])
        {
            a.push_back(i);
            a.push_back(A-i);
            return a;
        }
 }
 return a;
 
 
}
