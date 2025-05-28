#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    ll n, k; cin >> n >> k;
    vector<ll> arr(n);
    invl(arr);
    ll mx = -1;
    ll mn = 1e11;
    ll sum = 0;
    for(ll x: arr){
        mx = max(mx,x);
        mn = min(mn,x);
        sum += x;
    }
    if((mx - mn) > (k + 1)){
        cout << "Jerry" << '\n';
        return;
    }
    else{
        if(sum%2 == 1) cout << "Tom" << '\n';
        else cout << "Jerry" << '\n';
    }   

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}