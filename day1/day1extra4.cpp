#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    vector <int> v1;
    int j;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> j;
        v1.push_back(j);
    }
    vector <int> pos;
    vector <int> neg;
    for(int i=0;i<v1.size();i++){
        if(v1[i]<0){
            neg.push_back(v1[i]);
        }
        else{
            pos.push_back(v1[i]);
        }
    }
    vector <int> ans;
    for(int i=0; i<neg.size();i++){
        ans.push_back(neg[i]);
    }
    for(int i=0; i<pos.size();i++){
        ans.push_back(pos[i]);
    }
    for(int i = 0; i<ans.size();i++){
        cout << ans[i] << " ";
    }
    return 0;
}
