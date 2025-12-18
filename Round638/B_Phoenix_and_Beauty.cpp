#define AR AnmolRai
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n,k; cin >> n >> k;
    vector<ll> arr(n); for(auto &i : arr) cin >> i;
    set<ll> st(all(arr));
 
    if(k < st.size()){
        cout << "-1\n";
        return;
    }

    cout << n * k << '\n';
    for(ll i = 0; i < n; i++){
        for(int i :st) cout << i << " "; 
        for(ll i = 0; i < k - st.size(); i++) cout << 1 << " ";
    }
    cout << '\n';

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}