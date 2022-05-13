#include<bits/stdc++.h>
using namespace std;
int main(){
    string str, pat;
    cout << "Enter the string";
    getline(cin, str);
    cout << "Enter the pattern to search";
    getline(cin, pat);
    int pat_length = pat.size();
    for(int i=0; i<str.size(); i++){
        if(str[i]==pat[0]){
            bool flag = false;
            for(int j=1; j<pat_length; j++){
                if(str[i+j]!=pat[j]){
                    break;
                }
                if(j==pat_length-1){
                    cout << "Pattern found at index " << i << endl;
                }
            }
        }
    }
    return 0;
}
