#include<bits/stdc++.h>
using namespace std;
//Nearest smaller to left same question variation


vector<int> Nearest_smaller(vector<int>&nums)
{
    stack<int> s;
    vector<int> ans;
        for(int i=0;i<nums.size();i++)
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
 res=Nearest_smaller(v);
 for(auto i : res)
   cout<<i<<" ";
    return 0;
}