#include<bits/stdc++.h>
using namespace std;
int main(){
    cout << "Enter your binary string \n ";
    string s;
    cin >> s;
    int count_0 = 0;
    int count_1 = 0;
    int total_count = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='0')count_0++;
        if(s[i]=='1')count_1++;
        if(count_0 == count_1 && count_0 != 0){
            total_count++;
        }
        
    }
    if(total_count == 0){
        cout <<  -1 << endl; 
    }
    else{
        cout << total_count << endl; 
    }
    return 0;
}
