#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size;
    cin >> size;
    vector<ll> vals(size);
    for(ll &x : vals) cin >> x;
    for(int i = 0; i < size-1; i++){
        ll minim = min(vals[i],vals[i+1]);
        vals[i] -= minim;
        vals[i+1] -= minim;
    }
    for(ll i = 0; i < size-1; i++){
        if(vals[i] > vals[i+1]){
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
}