//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
// } Driver Code Ends


bool findPair(int arr[], int size, int n){
    map <int, int> m1;
    bool flag = false;
    for(int i=0; i<size; i++){
        m1[arr[i]]++;
    }
    if(n==0){
        for(auto i:m1){
            if(i.second>1){
                flag = true;
                break;
            }
        }
        return flag;
    }
    else{
        for(int i=0; i<size; i++){
            if(m1[arr[i]+n]>0){
                flag = true;
                break;
            }
        }
    }
    return flag;
}
