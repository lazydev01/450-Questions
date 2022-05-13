// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        //0 -> (
        //1 -> {
        //2 -> [
        vector <int> v;
        bool flag = false;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                v.push_back(0);
            }
            else if(s[i]=='{'){
                v.push_back(1);
            }
            else if(s[i]=='['){
                v.push_back(2);
            }
            else if(s[i]==')' && v.size()>0 && v.back()==0){
                v.pop_back();
            }
            else if(s[i]=='}' && v.size()>0 && v.back()==1){
                v.pop_back();
            }
            else if(s[i]==']' && v.size()>0 && v.back()==2){
                v.pop_back();
            }
            else{
                flag = true;
                break;
            }
        }
        if(flag){
            return false;
        }
        else if(v.size()==0){
            return true;
        }
        else{
            return false;
        }
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends
