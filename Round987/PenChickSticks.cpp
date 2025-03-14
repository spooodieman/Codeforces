#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    long size;
    cin >> size;
    vector<ll> vals(size);
    for(int i = 0; i < size; i++){
        cin >> vals[i];
    }
    for(int i = 0; i < size; i++){
        if(vals[i] == 1 || vals[i] == size){
            if(abs(vals[i] - (i+1)) > 1){
                cout << "NO" << '\n';
                return;
            }
        }
        else{
            if(abs(vals[i]-(i+1)) > 2){
                cout << "NO" << '\n';
                return;
            }
        }
    }
    cout << "YES" << '\n';
}

int main(){
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
}