void vec (vector<int>& A,int i, vector<int> temp,vector<vector<int>> &value)
{
    
            if(i == A.size())
            {
                value.push_back(temp);
                return;
            }
            vec(A,i+1,temp, value);
            temp.push_back(A[i]);
            vec(A,i+1,temp,value);
            
}
vector<vector<int> > Solution::subsets(vector<int> &A) {

sort(A.begin(), A.end());
vector<bool> vis(A.size(),false);
vector<vector<int>> value , final;
vector<int> temp;
vec(A,0,temp, value);
final.push_back(value[0]);
// for(int i = 0; i< A.size() ; i++)
// {
//     for(int j = 1; j< value.size(); j++)
//     {
//         if(value[j][0] == A[i])
//             final.push_back(value[j]);
//     }
// }
sort(value.begin(),value.end());
return value;
}
