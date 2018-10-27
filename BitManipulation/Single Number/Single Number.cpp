int Solution::singleNumber(const vector<int> &A) {
int ans = 0;
for(int a : A)
 ans ^= a;
 return ans;
}
