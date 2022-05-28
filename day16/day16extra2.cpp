// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal
// } Driver Code Ends


int minFlips (string S)
{
    int firstZero = 0;
    int firstOne = 0;
    for(int i=0; i<S.size(); i++){
        if(i%2==0){
            if(S[i]!='0'){
                firstZero++;
            }
            else{
                firstOne++;
            }
        }
        else{
            if(S[i]!='1'){
                firstZero++;
            }
            else{
                firstOne++;
            }
        }
    }
    return min(firstZero, firstOne);
}
