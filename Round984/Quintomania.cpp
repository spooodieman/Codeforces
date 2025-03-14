#include <bits/stdc++.h>
using namespace std;

void solve(){
    long size;
    cin >> size;
    vector<int> vals(size);
    for(int i = 0; i < size; i++) cin >> vals[i];
    for(int i = 0; i < size - 1; i++){
        long val = abs(vals[i] - vals[i+1]);
        if(val != 5 && val != 7){
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
}

int main(){
    long limit;
    cin >> limit;
    for(int i= 0; i< limit; i++) solve();
}