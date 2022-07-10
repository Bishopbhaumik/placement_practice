#include<bits/stdc++.h>
using namespace std;
/*next smaller element to the right of an element in an array .
we are using stack to solve the problem. 
*/
vector<int> Next_smaller(vector<int>& nums)
{
    stack<int> s;
    vector<int> ans;
    for(int i=nums.size()-1;i>=0;i--)
    {
        if(s.size()==0)
          ans.push_back(-1);
        
        else if( s.size()>0 && s.top()<nums[i])
        {
            ans.push_back(s.top());
        }
        else if(s.size()>0 && s.top()>nums[i])
        {
            while(s.size()>0 && s.top()>= nums[i])
            {
                s.pop();
            }
            if(s.size()==0)
             ans.push_back(-1);
             else
              ans.push_back(s.top());
        }
        s.push(nums[i]);
    }
   return ans;

}

int main()
{
   vector<int> v;
   vector<int>res;
   int n,val;
   cout<<"Enter the size :";
   cin>>n;

   for(int i=0;i<n;i++)
   {
     cin>>val;
    v.push_back(val);
   }
 res=Next_smaller(v);
reverse(res.begin(),res.end());
 for(auto i : res)
   cout<<i<<" ";
    return 0;
}