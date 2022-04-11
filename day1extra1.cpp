// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    int maximum = a[0];
    int minimum = a[0];
    for(int i=1;i<n;i++){
        if(maximum<a[i]){
            maximum = a[i];
        }
        if(minimum>a[i]){
            minimum = a[i];
        }
    }
    pair<int, int> p;
    p.first = minimum;
    p.second = maximum;
    return p;
}
