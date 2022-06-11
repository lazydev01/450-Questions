#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
 {
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    map<char, int> m1;
	    for(int i=0; i< s.size(); i++){
	        m1[s[i]] = 0;
	    }
	    for(int i=0; i< s.size(); i++){
	        m1[s[i]]++;
	    }
	    int max = INT_MIN;
	    for(auto it : m1){
	        if(it.second>max){
	            max = it.second;
	        }
	    }
	    if(s.size()%2==0){
	        if(max<=(s.size()/2)){
	            cout <<  1 << endl;
	        }
	        else{
	            cout <<  0 << endl;
	        }
	    }
	    else{
	        if(max<=(s.size()/2)+1){
	            cout <<  1 << endl;
	        }
	        else{
	            cout <<  0 << endl;
	        }
	    }
	}
	return 0;
}
