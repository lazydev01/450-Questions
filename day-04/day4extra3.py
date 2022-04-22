// This code does not work for odd number of mismatches.
// Needs to be optimized

#include <bits/stdc++.h>
using namespace std;

vector <int> solve(int *arr, int n){
    vector <int> ans;
    bool pflag = false;
    bool nflag = false;
    int postemp;
    int negtemp;
    for(int i=1; i<n; i++){
        if(arr[0] > 0){
            if(i%2==1 && arr[i]>0 && !pflag){
                postemp = i;
                pflag = true;
            }
            if(i%2==0 && arr[i]<0 && !nflag){
                negtemp = i;
                nflag = true;
            }
            if(pflag && nflag){
                int temp = arr[postemp];
                arr[postemp] = arr[negtemp];
                arr[negtemp] = temp;
                pflag = false;
                nflag = false;
            }      
        }
        else{
            if(i%2==1 && arr[i]<0 && !nflag){
                negtemp = i;
                nflag = true;
            }
            if(i%2==0 && arr[i]>0 && !pflag){
                postemp = i;
                pflag = true;
            }
            if(pflag && nflag){
                int temp = arr[postemp];
                arr[postemp] = arr[negtemp];
                arr[negtemp] = temp;
                pflag = false;
                nflag = false;
            }
        }
    }

    for(int i=0; i<n; i++){
        ans.push_back(arr[i]);
    }
    return ans;
}

int main(){
    cout << "Enter the length of array you want to insert ";
    int n;
    cin >> n;
    cout << "Enter the array elements" << endl;
    int arr[n];
    for(int i=0; i<n ; i++){
        cin >> arr[i];
    }
    vector <int> main_answer;
    main_answer = solve(arr, n);
    cout << "Output : ";
    for(int i=0; i<main_answer.size(); i++){
        cout << main_answer[i] << " ";
    }
    return 0;
}
