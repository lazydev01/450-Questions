/*
4] -> Write a Program to check if strings are rotations of each other or not

Given a string s1 and a string s2, write a snippet to say whether s2 is a rotation of s1? 
(eg given s1 = ABCD and s2 = CDAB, return true, given s1 = ABCD, and s2 = ACBD , return false) 

ABCD
BCDA
CDAB
DABC

*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    string s2;
    cout << "Enter the string1";
    cin >> s1;
    cout << "Enter the string2";
    cin >> s2;
    char temp = s2[0];
    string s3 = "";
    int j = 0;
    bool flag = false;
    int temp2;
    for(int i=0; i<s1.size(); i++){
        if(s1[i]==temp){
            temp2 = i;
        }
        if(s1[i]==temp || flag){
            flag = true;
            s3 = s3 + s1[i];
            j++;
        }
    }
    for(int i=0; i<temp2; i++){
        s3 = s3 + s1[i];
    }
    bool flag2 = false;
    for(int i=0; i<s2.size(); i++){
        if(s2[i]!=s3[i]){
            flag2 = true;
            break;
        }
    }
    if(flag2){
        cout << "false";
    }
    else{
        cout << "true";
    }
    return 0;
}

/*
Malay
layma
alyma
*/
