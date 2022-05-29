// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        map<string, int> m1;
        for(int i=0; i<n; i++){
            m1[arr[i]] = 0;
        }
        for(int i=0; i<n; i++){
            m1[arr[i]]++;
        }
        set<string> s;
        for(int i = 0; i<n; i++){
            s.insert(arr[i]);
        }
        if(s.size()==1){
            return "";
        }
        vector<int> v1;
        for(auto i:s){
            v1.push_back(m1[i]);
        }
        sort(v1.begin(), v1.end());
        int temp = v1[v1.size()-2];
        for(auto i: s){
            if(m1[i] == temp){
                return i;
            }
        }
        
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends
