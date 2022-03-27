#include <bits/stdc++.h>
using namespace std;
//Bishop Bhaumik
void generate(vector <char> &nums, int currin,vector<char> &res,vector <vector<char>> &output)
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



vector <vector<char>> subsets(vector <char> &nums)
{
    vector <vector<char>> output;
    vector <char> res;
    generate(nums,0,res,output);
    return output;

}



int main()
{
    string nam="abcd";
   vector <char> values;
   int n=nam.size();

   for(int i=0;i<n;i++)
   {
         values.push_back(nam[i]);
   }
   vector <vector<char>> result;
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