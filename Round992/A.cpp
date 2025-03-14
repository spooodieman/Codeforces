#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
        ll size,k; cin >> size >> k;
        vector<ll> vals(size);
        for(ll i = 0; i < size; i++){
            cin >> vals[i];
        }
        for(ll i = 0; i < size; i++){
            bool solved = false;
            for(ll j = 0; j < size; j++){
                if(j == i) continue;
                if(abs(vals[i]-vals[j])%k == 0) solved = true;
            }
            if(!solved){
                cout << "YES\n" << i+1 <<'\n';
                return;
            }
        }
        cout << "NO" << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}