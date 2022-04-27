// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


 // } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
        int f = 0;
    	for(int i=0; i<n; i++){
    	    string str_a = to_string(a[i]);
    	    for(int j=0; j<(int)(str_a.size()/2);j++){
    	        if(str_a[j]!=str_a[str_a.size()-1-j]){
    	            f=1;
    	            break;
    	        }
    	    }
    	    if(f==1){
    	        break;
    	    }
    	}
    	if(f==1){
    	    return 0;
    	}
    	else{
    	    return 1;
    	}
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}  // } Driver Code Ends
