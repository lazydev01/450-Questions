#include<bits/stdc++.h>
using namespace std;
int main(){
    cout << "Enter your string" << endl;
    string s;
    getline(cin, s);
    map<char, int>m;
    for(int i=0; i<s.size();i++){
        cout << s[i];
    }
    for(int i=0; i<s.size();i++){
        m[s[i]] = 0;
    }
    for(int i=0; i<s.size();i++){
        m[s[i]]+=1;
    }
    for(auto i:m){
        if(i.second>1){
            cout << "Count of " << i.first << " is " << i.second << endl;
        }
    }
    
    return 0;
}
