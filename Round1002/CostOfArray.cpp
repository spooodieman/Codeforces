#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll size, k;
    cin >> size >> k;
    ll extra = size%k;
    ll parts = size/k;
    vector<ll> vals(size);
    for(ll &x: vals) cin >> x;
    ll curr = 1;
    if(extra == 0){
        for(ll i = parts; i < size; i += (2 * parts)){
            for(ll j = i; j < i+parts; j++){
                if(vals[j] == curr)curr++;
                else{
                    cout << curr << '\n';
                    return; 
                }
            }
        }
        cout << curr << '\n';
        return;
    }
    
}

int main(){
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
}