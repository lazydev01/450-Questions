// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal// } Driver Code Ends



int countRev (string s)
{
    if(s.size()%2==1){
        return -1;
    }
    float count = 0;
    float perfect = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='{'){
            perfect++;
        }
        else{
            if(perfect==0){
                count++;
            }
            else{
                perfect--;
            }
        }
    }
    float temp2 = count/2;
    float temp = perfect/2;
    count = ceil(temp) + ceil(temp2);
    return count;
}
