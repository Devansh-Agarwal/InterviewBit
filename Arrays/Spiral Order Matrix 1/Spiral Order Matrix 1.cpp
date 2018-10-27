vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
int t =0, r = A[0].size()-1, l= 0 , b = A.size()-1;
    vector<int> arr;
    int dir = 0;
    while(t<= b && l <= r)
{
        if( dir == 0)
        {
            for(int i = l; i <=r ; i++)
            {
                arr.push_back(A[t][i]);
                
            }
            dir ++;
            t++;
            continue;
        }
        if( dir == 1)
        {
            for(int i = t; i <=b ; i++)
            {
                arr.push_back(A[i][r]);
            }
            dir ++;
            r--;
            continue;
        }
                if( dir == 2)
        {
            for(int i = r; i >=l ; i--)
            {
                arr.push_back(A[b][i]);
            }
            dir ++;
            b--;
            continue;
        }
                if( dir == 3)
        {
            for(int i = b; i >=t ; i--)
            {
                arr.push_back(A[i][l]);
            }
            dir  = 0;
            l++;
        
            continue;
        }
}
return arr;
    
}
