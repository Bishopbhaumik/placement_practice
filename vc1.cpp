#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5,v;
    vector<int>ap;

    for(int i=0;i<n;i++)
    {
        cin>>v;
        ap.push_back(v);
    }
   for (auto it = ap.back();it != ap.front(); --it)
    cout<<" "<<it;
}