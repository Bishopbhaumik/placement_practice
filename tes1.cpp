// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    unordered_map<char,int>mp;
	     int i=0,j=0,ans=0;
	     
	    for(int k=0; k<txt.size();k++)
	       mp[txt[k]]++;
	       
	     int l=txt.size();
	       
	     int count=mp.size();
	    while(j<pat.size())
	    {
	        
	        if(mp.find(pat[j])!=mp.end())
	          {
	              mp[pat[j]]--;
	              
	              if(mp[pat[j]]==0)
	                count--;
	          }
	          
	          if(j-i+1<l)
	          {
	              j++;
	          }
	          else if(j-i+1==l)
	          {
	             if(count==0)
	             {
	                 ans+=1;
	             }
	       
	         
	        if(mp.find(pat[i])!=mp.end())
	        {
	            mp[pat[i]]++;
	            if(mp[pat[i]]==1)
	              count++;
	        }
            i++;
            j++;
	       }
	    }
	
	    return ans;
	    
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends