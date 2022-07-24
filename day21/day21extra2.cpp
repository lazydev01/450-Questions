#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> v1(n);
    for(int i=0; i<n; i++){
        cin >> v1[i];
    }
    int k;
    cin >> k;
    int x;
    cin >> x;
    int i=0; 
    bool flag = false;
    while(i<n){
        if(v1[i]==x){
            cout << i << endl;
            flag = true;
            break;
        }
        i+=max(1, (v1[i]-x)/k);
    }
    if(!flag){
        cout << -1 << endl;
    }
    return 0;
}
