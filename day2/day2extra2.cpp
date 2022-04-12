// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        int max = -2147483648;
        int currentSum = 0;
        int maxSum = 0;
        for(int i=0; i<n; i++){
            if(max<arr[i]){
                max = arr[i];
            }
            currentSum = currentSum + arr[i];
            if(currentSum>maxSum){
                maxSum = currentSum;
            }
            if(currentSum<0){
                currentSum = 0;
            }
        }
        if(max<0){
            return max;
        }
        else{
            return maxSum;
        }
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends
