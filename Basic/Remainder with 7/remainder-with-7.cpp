//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    /*You are required to complete this method */
    int remainderWith7(string n)
    {
        //Your code here
        int num = 0;
        for(int i=0;i<n.size();i++)
        {
            int digit = n[i]-'0';
            num=num*10+digit;
            num=num%7;
        }
 return num;
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
    string n;
    cin>>n;
    Solution ob;
    cout<<ob.remainderWith7(n)<<endl;
    
    }
	return 0;
}
// } Driver Code Ends