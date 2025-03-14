#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll num, size;
    cin >> num >> size;
    vector<vector<ll>> vals(num,vector<ll>(size));
    for(ll i = 0; i< num; i++){
        for(ll j = 0; j < num; j++) cin >> vals[i][j];
    }
    
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
}