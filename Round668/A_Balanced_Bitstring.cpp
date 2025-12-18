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
    ll n,k; cin >> n >> k;
    string s; cin >>s;
    ll one = 0;
    ll zero = 0;
    f(i,0,k){
        ll temp = -1;
        for(ll j = i; j < n; j+= k){
            if(s[j] == '?') continue;
            if(temp != -1 && (s[j] - '0') != temp){
                NO;
                return;
            }
            temp = s[j] - '0';
        }
        if(temp != -1){
            if(temp == 0) zero++;
            else one++;
        }
    }
    if(max(zero,one) > k/2) NO;
    else YES;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}