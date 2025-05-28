#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    string m; cin >> m;

    for(ll i = 1; i < 10; i++){
        if(m[i] == (10-1-i)) continue;
        else{
            char lower = ('0' + 10-1-i);
            char mn = '9';
            ll index = i;
            for(ll j = i+1; j < 10; j++){
                if(m[j] >= lower){
                    if(mn > m[j]){
                        mn = m[j];
                        index = j;
                    }
                }
            }
            if(m[index] < m[i])swap(m[i],m[index]);
        }
    }
    cout << m << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}