// C++ program for the above approach
#include <bits/stdc++.h>
#include<vector>
using namespace std;
 
long countPairs(const vector<int>& arr) {
    long ans=0;
    int mx=0;
    map<int,int> mp;
    for(int ai=0;ai<arr.size(); ai++){
        mp[ai]++;
        mx = max(mx,ai);
    }
    for(int i=0; i<=mx; ++i){
        if(!mp.count(i)) continue;
        for(int j=i; j<=mx; ++j){
            if(!mp.count(j)) continue;
            // cout<<i<<':'<<mp[i]<<','<<j<<':'<<mp[j]<<'\n';
			// cout<<mp[i]<<','<<mp[j]<<'\n';
            if(__builtin_popcountll(i&j)==1){
                if(i==j) ans+=((long(mp[i])*(mp[i]-1))/2);
                else
                ans+= (long(mp[i])*mp[j]);
            }
        }
    }
    return ans;
}
 
// Driver Code
int main()
{
    // Given array
    int arr[] = { 1, 2, 3, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> numbers(arr, arr + n);
    // Function Call
    for(int i=0;i<numbers.size();i++)
	  cout<<numbers[i]<<endl;
    cout << countPairs(numbers);
    return 0;
}