#include<bits/stdc++.h>
using namespace std;

vector<int> stock_span(vector<int>& nums)
{
    stack<pair<int,int>> s;
    vector<int> ans;
     vector<int> index;
    for(int i=0;i<nums.size();i++)
    {
         if(s.size()==0)
          ans.push_back(-1);

           else if( s.size()>0 && s.top().second>nums[i])
        {
            ans.push_back(s.top().first);
        }
        else if(s.size()>0 && s.top().second<nums[i])
        {
            while(s.size()>0 && s.top().second<= nums[i])
            {
                s.pop();
            }
            if(s.size()==0)
             ans.push_back(-1);
             else
              ans.push_back(s.top().first);
        }
        s.push({i,nums[i]});
    }

    for(int i=0;i<nums.size();i++)
      index.push_back(i-ans[i]);
      
    return index;
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
  res=stock_span(v);

  for(auto i: res)
    cout<<i<<" "; 
return 0;
}