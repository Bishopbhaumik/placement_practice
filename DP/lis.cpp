#include<iostream>
using namespace std;
const int N=1e3+5;
int dp[N]={NULL};
//longest increasing subsequent
int lis(int *arr,int n)
{
   if(dp[n]!=NULL)
   {
       return dp[n];
   }
   dp[n]=1;//for single element
   for(int i=0;i<n;i++)
   {
       if(arr[n]>arr[i])
       {
           dp[n]=max(dp[n],1+lis(arr,i));
       }
   }
   return dp[n];
}
int main()
{
    cout<<"================Example of Dynamic Programing==========================="<<endl;
    int n;
    cout<<"Enter array size";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    cout<<"The length of the longest common subsequent is:=>\n";
    cout<<lis(arr,n-1);    

    return 0;
}