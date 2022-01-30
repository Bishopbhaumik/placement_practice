#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
 

vector <int> sor(int *arr,int n,int *brr,int m)
{
    vector <int> v;
    unordered_set<int>  s;
    for(int i=0;i<n;i++)
      s.insert(arr[i]);
    
    for(int i=0;i<m;i++)
    {
        int key=brr[i];
      if(s.find(key)!=s.end())
      {
       v.push_back(key);
       s.erase(key);
    }
}
return v;
}
int main()
{
    int n,m;
    cout<<"enter sizes of first and second array :";
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
    {
        cout<<"enter first array:";
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cout<<"enter second array:";
        cin>>b[i];
    }
    vector <int> r;
    r=sor(a,n,b,m);
    cout<<"intersection of the two array:"<<endl;
    for(int i=0;i<r.size();i++)
     cout<<r[i]<<endl;
    return 0;
}