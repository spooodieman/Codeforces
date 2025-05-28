#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()
#define fl(p,n) for(ll p = 0; p < n; p++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define vi vector<ll>

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n,k; cin >> n >> k;
    ll one = 0;
    ll zero = 0;
    string s; cin >> s;
    fl(i,n){
        if(s[i] == '1') one++;
        else zero++;
    }
    while(k && one > 1 && zero > 1){
        if(one >= zero) one -=2;
        else zero -= 2;
        k--; 
    }
    if(k == 0){
        if(one == zero) YES;
        else NO;
        return;
    }
    else{
        if(one > 1){
            one -= k*2;
            k = 0;
            if(one < 0 || one != zero){
                NO;
                return;
            }
            else YES;
        }
        else{
            zero -= k*2;
            k = 0;
            if(zero < 0 || one != zero){
                NO;
                return;
            }
            else YES;
        }
    }
    
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}