#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cout << "Enter the number of computers" << endl;
    cin >> n;
    cout << "Enter the string of arrival and departure" << endl;
    cin >> s;
    map <char, int> m;
    set <char> se;
    int count = 0;
    for(int i=0; i<s.size(); i++){
        if(se.count(s[i])>=1){
            se.erase(s[i]);
        }
        else{
            se.insert(s[i]);
            if(se.size()>n){
                count++;
            }
        }
    }
    cout << count << endl;
return 0;
}
