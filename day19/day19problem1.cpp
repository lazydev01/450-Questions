#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cout << "Enter the string A" << endl;
    cin >> a;
    cout << "Enter the string B" << endl;
    cin >> b;
    int count =0;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    bool boolean = false;
    int temp = -1;
    for(int i = 0; i< a.size(); i++){
        for(int j = temp+1; j<b.size(); j++){
            if(a[i]==b[j]){
                temp = j;
                count ++;
                break;
            }
            if(j==b.size()-1){
                boolean = true;
                break;
            }
        }
        if(boolean){
            break;
        }
    }
    cout << a.size()-count << endl;
    
    
return 0;
} 
