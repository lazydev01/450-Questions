//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    sort(arr,arr+n);
	    long long count = 0;
	    int remaining, left, right, current_sum;
	    for(int i=0; i<n-2; i++){
	        remaining = sum - arr[i];
	        left = i + 1;
	        right = n - 1;
	        while(left<right){
	            current_sum = arr[left] + arr[right];
	            if(current_sum<remaining){
	                count += (right-left);
	                left++;
	            }
	            else{
	                right--;
	            }
	        }
	    }
	    return count;
	}
		 

};

//{ Driver Code Starts.

int main() 
{
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	    

       

        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends
