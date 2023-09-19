//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
        // Your code goes here
        int n1 = array1.size();
        int n2 = array2.size();
        int n = n1+n2 ;
        
        int ind1 = n/2;
        int ind2 = (n % 2 == 0) ? ind1 - 1 : ind1;
         
        int  i = 0;
        int j = 0;
        
        int count = 0;
        int x = -1;
        int y = -1;
        
        while (i < n1 && j < n2) {
        if (array1[i] < array2[j]) {
            if (count == ind1) x = array1[i];
            if (count == ind2) y = array1[i];
            i++;
        } else {
            if (count == ind1) x = array2[j];
            if (count == ind2) y = array2[j];
            j++;
        }
        count++;
    }

    while (i < n1) {
        if (count == ind1) x = array1[i];
        if (count == ind2) y = array1[i];
        i++;
        count++;
    }

    while (j < n2) {
        if (count == ind1) x = array2[j];
        if (count == ind2) y = array2[j];
        j++;
        count++;
    }
        
        return (x+y)/2.0;
    

    
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends