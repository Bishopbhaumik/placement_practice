#include<bits/stdc++.h>
using namespace std;

void all_path(int row,int col,int n, vector <vector<int>> &m,string answer,vector <string> &res)
{
    if(row<0 || row>=n ||col<0 || col>=n || m[row][col]==0)
    {
        return;
    }

    if(row== n-1 && col == n-1)
    {
        res.push_back(answer);
        return;
    }

    m[row][col]=0;
    all_path(row+1,col,n,m,answer+"D",res);
    all_path(row,col-1,n,m,answer+"L",res);
    all_path(row,col+1,n,m,answer+"R",res);
    all_path(row-1,col,n,m,answer+"U",res);
    m[row][col]=1;
    
    return;
}


vector <string> findpath(vector <vector<int>> &m,int n)
{
    string ans="";
    vector <string> res;
    all_path(0,0,n,m,ans,res);
    sort(res.begin(),res.end());
    return res;
}


int main()
{
    int n;
    cout<<"enter dimension:";
    cin>>n;
    vector<vector<int>> values;
    vector <string> result;
    for(int i=0;i<n;i++)
       {
           vector<int> val;
          for(int j =0; j< n;j++)
          {
              
              int ele;
              cin>>ele;
              val.push_back(ele);
          }
          values.push_back(val);
          cout<<"next row"<<endl;
       }

    cout<<"\n the matrrix::::>\n";
    for(int i=0;i<values.size();i++)
       {
           cout<<"[";
          for(int j =0; j< values[i].size();j++)
          {
              cout<<values[i][j];
          }
          cout<<"]"<<endl;
       }







    result=findpath(values,3);
    cout<<"\n all paths are :::::::>\n";
    for(int i =0;i<result.size();i++)
         cout<<result[i]<<endl;


  return 0;
}