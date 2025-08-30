#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()
#define f(p,q,n) for(ll p = q; p < n; p++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define vi vector<ll>

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    string turn = "Alice";
    ll n; cin >> n;
    vi arr(n); invl(arr);
    sort(all(arr));
    ll req = 1;
    ll ind = 0;
    while(ind < arr.size() && arr[ind] == req){
        req++;
        while(ind < arr.size() && arr[ind] == req-1){
            ind++;
        }
        if(turn == "Alice") turn = "Bob";
        else turn = "Alice";
    }
    if(ind == arr.size()) {
        if(turn == "Bob")cout << "Alice\n";
        else cout << "Bob\n";
        return;
    }
    cout << turn << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}