//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string>ans;
		    int sz = s.length();
		    int n = pow(2,sz);
		    
		    for(int i = 1;i<n;i++)
		    {
		        int x = i;
		        string c = "";
		        int idx = 0;
		        
		        while(x != 0)
		        {
		            if(x & 1)
		            {
		                c += s[idx];
		            }
		            idx++;
		            x >>= 1;
		        }
		        ans.push_back(c);
		    }
		    sort(begin(ans),end(ans));
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends