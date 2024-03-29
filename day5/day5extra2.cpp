// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
        sort(arr, arr+N);
        int temp = arr[0];
        int count = 1;
        int maxCount = 1;
        for(int i=1; i<N; i++){
            if(arr[i]==temp){
                continue;
            }
            if(arr[i]== temp+1){
                temp++;
                count++;
            }
            else{
                temp = arr[i];
                count = 1;
            }
            maxCount = max(maxCount, count);
        }
        return maxCount;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends
