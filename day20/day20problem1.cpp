// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    int low = 0;
    int high = n-1;
    int found = -1;
    vector <int> v1;
    if(n==1){
        v1.push_back(0);
        v1.push_back(0);
    }
    else{
        while(low<high){
            int mid = (low+high)/2;
            // cout << "MID" << mid << endl;
            if(x == arr[mid]){
                found = mid;
                break;
            }
            else if(x==arr[high]){
                found = high;
                break;
            }
            else if(x==arr[low]){
                found = low;
                break;
            }
            else if(x>arr[mid]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
            // cout << "INSIDE FOUND" << found << endl;
        }
        // cout << "OUTSIDE FOUND" << found << endl;
        int temp = found;
        if (found==0){
            v1.push_back(found);
        }
        else{
            while(arr[found-1]==arr[found]){
               found--;
               if(found==0){
                   break;
               }
            }
            v1.push_back(found);
        }
        found = temp;
        if(found==n-1){
            v1.push_back(found);
        }
        else{
            while(arr[found]==arr[found+1]){
                found++;
                if(found==n-1){
                    break;
                }
            }
            v1.push_back(found);
        }
    }
    return v1;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends
