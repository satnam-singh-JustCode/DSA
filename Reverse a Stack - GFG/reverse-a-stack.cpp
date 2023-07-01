//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
void insertAtBottom(stack<int> &s, int te){
    // base case 
    if(s.empty()){
        s.push(te);
        return;
    }
    
    // recursive case
    int top = s.top();
    s.pop();
    insertAtBottom(s,te);
    s.push(top);
}
void reverseStack(stack<int> &s){
    // base case 
    if(s.empty()){
        return;
    }
    // recursive case
    int topE = s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s,topE);
}
    void Reverse(stack<int> &St){
        reverseStack(St);
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends