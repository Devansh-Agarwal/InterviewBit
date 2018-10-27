vector<string> Solution::fizzBuzz(int A) {
vector<string> ans;
string temp;
for(int i= 1; i <=A ; i++)
{temp = "";
if(i%3 == 0)
  temp+= "Fizz";
  if(i%5 == 0)
  temp+= "Buzz";
  if(temp.size() == 0)
   temp += to_string(i);
    ans.push_back(temp);
    
}
return ans;
    
}
