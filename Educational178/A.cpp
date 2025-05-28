#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll a,b,c; cin >> a >> b >> c;
    ll sum = a + b + c;
    if(sum%3) {
        cout << "NO" << '\n';
        return;
    }
    ll average = sum/3;
    if(a <= average && b <= average) cout << ((a <= c && b <= c)?("YES"):("NO")) << '\n'; 
    else cout << "NO" << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}