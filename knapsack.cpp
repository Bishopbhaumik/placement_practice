#include<bits/stdc++.h>
#include<iostream>
using namespace std;

const int N=1e3+2;
int vo[N],wt[N];
int dp[N][N];
int knapsack(int n,int w)
{
  if(w<=0)
   return 0;

  if(n<=0)
   return 0;

 if(dp[n][w]!=-1)
   return dp[n][w];

 if(wt[n-1]>w)
   dp[n][w]=knapsack(n-1,w);
else
 dp[n][w]=max(knapsack(n-1,w),knapsack(n-1,w-wt[n-1])+vo[n-1]);

 return dp[n][w];
}


int main()
{
   int n;
   cout<<"Size of the slots:";
   cin>>n;
   cout<<"enter weight:\n";
  
   for(int i=0;i<n;i++)
     cin>>wt[i];
  
   cout<<"enter the volumes of respective wright:\n";
   
   for(int i=0;i<n;i++)
     cin>>vo[i];
    
    int li;
    
    cout<<"enter limit:";
    cin>>li;
    
    for(int i=0;i<n;i++)
    {
     for(int j=0;j<n;j++)
     {
      dp[i][j]=-1;
     }
    }
    cout<<knapsack(n,li);
    return 0;
}