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

bool checker(ll val){
    ll cop = val;
    while(val){
        ll curr = val%10;
        if(curr != 0){
            if(cop%curr != 0){
                return false;
            }
        }
        val/=10;
    }
    return true;
}

void solve(ll tt = 0){
    ll n; cin >> n;
    while(!checker(n)) n++;
    cout << n << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}