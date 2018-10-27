int num(int i, int j)
{
    if(i == 1 && j == 1)
    return 1;
    if(i<=0 || j<=0)
    return 0;
    int temp =  num(i-1, j) + num(i, j-1);
    return temp;
}
int Solution::uniquePaths(int A, int B) {
    return num(A,B);
}
