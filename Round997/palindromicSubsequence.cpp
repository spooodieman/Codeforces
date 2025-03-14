#include <bits/stdc++.h>
using namespace std;

void solve(){
    long n;
    cin >> n;
    cout << 1 << " ";
    for(int i = 2; i <= n-2; i++) cout << i-1 << " ";
    cout << "1 2";
    cout << '\n';
}

int main(){
    int testcases;
    cin >> testcases;
    for(int i = 0; i < testcases; i++) solve();
}