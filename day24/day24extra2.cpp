//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        int sum = 0;
        int maximum = 0;
        for(int i=0; i<N; i++){
            sum+=A[i];
            maximum = max(maximum, A[i]);
        }
        int low = maximum;
        int high = sum;
        int res = 0;
        while(low<=high){
            int mid = (low + high)/2;
            int sum2 = 0;
            int count = 1;
            for(int i=0; i<N; i++){
                if(sum2 + A[i] > mid){
                    count++;
                    sum2 = A[i];
                }
                else{
                    sum2+=A[i];
                }
            }
            if(count<=M){
                res = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends
