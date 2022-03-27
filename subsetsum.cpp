#include <bits/stdc++.h>
using namespace std;
//Bishop Bhaumik
void totways(vector <int> &nums, int currin,int target,vector<int> &res,vector <vector<int>> &output)
{

    if (currin == nums.size())
     {
         if(target == 0)
         output.push_back(res);
         
         return ;
     }

     if(nums[currin]<=target)
     {
         res.push_back(nums[currin]);
         totways(nums,currin,target-nums[currin],res,output);
         res.pop_back();
     }
    // int curvalue=nums[currin];
    // res.push_back(curvalue);

    
    // res.pop_back();
    //back tracking 
    totways(nums,currin+1,target,res,output);

}



vector <vector<int>> subsets(vector <int> &nums,int target)
{
    vector <vector<int>> output;
    vector <int> res;
    totways(nums,0,target,res,output);
    return output;

}



int main()
{
   vector <int> values;
   int n,tar ;
   cout<<"enter size:";
   cin>>n;


   for(int i=0;i<n;i++)
   {
       int ele;
       cin>>ele;
       values.push_back(ele);
   }
   vector <vector<int>> result;
   cout<<"Enter the target value:\n";
   cin>>tar;
   result = subsets(values,tar);
    
   cout<<"\n::::::::::: All subsets are :::::::::::::\n";
   for(int i=0;i<result.size();i++)
       {
           cout<<"[";
          for(int j =0; j< result[i].size();j++)
          {
              cout<<result[i][j]<<" ";
          }
          cout<<"]"<<endl;
       }

    return 0;
}