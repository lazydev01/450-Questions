// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        long long waterTrapped = 0;
        vector  <int> left;
        vector <int> right;
        int ma = 0;
        int ma2 = 0;
        for(int i =0 ; i < n ; i++){
            if(arr[i]>=ma){
                ma = arr[i];
            }
            left.push_back(ma);
        }
        for(int i= n -1; i>=0; i--){
            if(arr[i]>=ma2){
                ma2 = arr[i];
            }
            right.push_back(ma2);
        }
        reverse(right.begin(), right.end());
        for(int i = 0; i<n; i++){
            int diff = min(left[i], right[i]) - arr[i];
            waterTrapped+=diff;
        }
        return waterTrapped;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends
