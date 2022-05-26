// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        int ans = 0;
        vector<int> v1;
        for(int i = 0; i<str.size(); i++){
            char c = str[i];
            int temp;
            if(c=='I')temp=1;
            if(c=='V')temp=5;
            if(c=='X')temp=10;
            if(c=='L')temp=50;
            if(c=='C')temp=100;
            if(c=='D')temp=500;
            if(c=='M')temp=1000;
            v1.push_back(temp);
        }
        for(int i=0; i<v1.size()-1;i++){
            if(v1[i]>=v1[i+1]){
                ans+=v1[i];
            }
            else{
                ans-=v1[i];
            }
        }
        ans+=v1[v1.size()-1];
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}  // } Driver Code Ends
