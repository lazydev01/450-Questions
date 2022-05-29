// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    int minimumNumberOfSwaps(string S){
        int count = 0;
        int leftBracket, rightBracket = 0;
        int imbalance = 0;
        for(int i=0; i<S.size(); i++){
            if(S[i]=='['){
                leftBracket++;
                if(imbalance>0){
                    count+=imbalance;
                    imbalance--;
                }
            }
            else{
                rightBracket++;
                imbalance = rightBracket-leftBracket;
            }
        }
        return count;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.minimumNumberOfSwaps(S) << endl;
    }
    return 0; 
}   // } Driver Code Ends
