#define AR AnmolRai
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll a,b; cin >> a >> b;
    ll diff = abs(a-b);
    if(diff == 0){
        cout << "0\n";
        return;
    }
    for(ll i = 1; i <= 1e5; i++){
        ll curr = i*(i+1)/2;
        if(curr >= diff && ((curr%2) == (diff%2))){
            cout << i << '\n';
            return;
        }
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}