#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    for(int i=0; i<str.size(); i++){
        if(str[i]==' '){
            cout << 0;
            continue;
        }
        int temp = (int)str[i] - 64;
        // cout << temp;
        if(temp>=16 && temp<=19){
            temp = temp - 15;
            for(int j=0; j<temp; j++){
                cout << 7;
            }
        }
        else if(temp>=23 && temp<=26){
            temp = temp - 22;
            for(int j=0; j<temp; j++){
                cout << 9;
            }
        }
        else if(temp>=20 && temp<=22){
            temp-=19;
            for(int j=0; j<temp;j++){
                cout << 8;
            }
        }
        else{
            int div = (temp/3) + 2;
            int rem = temp%3;
            if(rem==0){
                rem = 3;
                div--;
            }
            for(int k=0; k<rem; k++){
                cout << div;
            }
        }
    }
    return 0;

}


