int Solution::gcd(int A, int B) {
    int i = 2, gcd = 1, a = min(A,B),b =max(A,B);
    if(a == 0)
     return b;
    while(i<=a)
    {
        if(a%i == 0 && b%i == 0)
        {
            gcd = gcd * i;
            a=a/i;
            b = b/i;
        
            continue;
        }
        i++;
    }
    return gcd;
}
