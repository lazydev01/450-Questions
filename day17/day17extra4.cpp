#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    int palindrome_length = 0; 
    for(int i=1; i<str.size(); i++){
        string new_str;
        new_str = str.substr(0,i+1);
        string reversed_str;
        reversed_str = new_str;
        reverse(new_str.begin(), new_str.end());
        if(reversed_str==new_str){
            palindrome_length = i+1;
        }
    }
    int remaining_length = str.size() - palindrome_length;
    if(palindrome_length==0){
        if(str.size()%2==0){
            cout << str.size() << endl;
        }
        else{
            cout << str.size() - 1 << endl;
        }
    }
    else{
        cout << remaining_length << endl;
    }

return 0;
}
