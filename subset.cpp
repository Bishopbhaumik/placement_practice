#include <bits/stdc++.h>
using namespace std;
//Bishop Bhaumik
void generate(vector <int> &nums, int currin,vector<int> &res,vector <vector<int>> &output)
{

    if (currin >= nums.size())
     {
         output.push_back(res);
         
         return ;
     }
    int curvalue=nums[currin];
    res.push_back(curvalue);
    generate(nums,currin+1,res,output);

    
    res.pop_back();
    generate(nums,currin+1,res,output);

}



vector <vector<int>> subsets(vector <int> &nums)
{
    vector <vector<int>> output;
    vector <int> res;
    generate(nums,0,res,output);
    return output;

}



int main()
{
   vector <int> values;
   int n ;
   cout<<"enter size:";
   cin>>n;
   for(int i=0;i<n;i++)
   {
       int ele;
       cin>>ele;
       values.push_back(ele);
   }
   vector <vector<int>> result;
   result = subsets(values);
    
   cout<<"\n::::::::::: All subsets are :::::::::::::\n";
   for(int i=0;i<result.size();i++)
       {
           cout<<"[";
          for(int j =0; j< result[i].size();j++)
          {
              cout<<result[i][j];
          }
          cout<<"]"<<endl;
       }

    return 0;
}