#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout << "Please enter the value of n(number of rows)" << endl;
    cin >> n;
    cout << "Please enter the value of m(number of elements in a row)" << endl;
    cin >> m;
    cout << "Please enter the elements of matrix. Total size: - " << m*n << endl;
    vector<vector <int>> MAT;
    int k;
    for(int i=0; i<n; i++){
        vector<int> v;
        for(int j=0; j<m; j++){
            cin >> k;
            v.push_back(k);
        }
        MAT.push_back(v);
    }
    unordered_map<int, int>map;
    for(int i=0; i<m;i++){
        map[MAT[0][i]] = 1;
    }
    for(int i=1;i<n; i++){
        for(int j=0; j<m;j++){
            if(map[MAT[i][j]]==i){
                map[MAT[i][j]]=i+1;
            }
        }
    }
    cout << "Elements common in a row" << endl;
   for (auto p : map){
       if(p.second ==n){
           cout << p.first << endl;
       }
      
   }
    
    return 0;
}
