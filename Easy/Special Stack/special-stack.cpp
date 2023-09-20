//{ Driver Code Starts
#include<iostream>
#include<stack>
using namespace std;
void push(stack<int>& s,int a);
bool isFull(stack<int>& s,int n);
bool isEmpty(stack<int>& s);
int pop(stack<int>& s);
int getMin(stack<int>& s);
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty(s)){
		    pop(s);
		}
		while(!isFull(s,n)){
			cin>>a;
			push(s,a);
		}
		cout<<getMin(s)<<endl;
	}
}
// } Driver Code Ends


void push(stack<int>& s, int a){
    s.push(a);
	// Your code goes here
}

bool isFull(stack<int>& s,int n){
    if(s.size()==n)
    {
        return true;
    }
    return false;
	// Your code goes here
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	if(s.size()==0)
    {
        return true;
    }
    return false;
}

int pop(stack<int>& s){
    
    
    s.pop();
	// Your code goes here
}



int getMin(stack<int>& s){
	// Your code goes here
int ans = s.top();
	while(s.size()!=0)
	{
	    ans = min(ans,s.top());
	    s.pop();
	}
	return ans;
    
}