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
    ll n; cin >> n;
    string s,t; cin >> s >> t;
    vi score(n,0);
    if(n == 1){
        if(s == t) YES;
        else NO;
        return;
    }
    if(s[n-1] != t[n-1])score[n-1] = 1; 
    else score[n-1] = 2;
    for(ll i = n-2; i >= 0; i--){
        if(s[i] == t[i]){
            if(score[i+1]%2 != 0){
                score[i] = 1 + score[i+1];
            }
            else{
                score[i] = score[i+1];
            }
        }
        else{
            if(score[i+1]%2 != 1){
                score[i] = 1 + score[i+1];
            }
            else{
                score[i] = score[i+1];
            }
        }
    }
    ll curr = 0;
    for(ll i = 0; i < n; i++){
        if(score[i] == 0) break;
        else if(i != 0 && score[i] !=score[i-1]){
            if(curr != 0){
                NO;
                return;
            }
        }
        if(s[i] == '0') curr++;
        else curr--;
    }
    if(score.back()%2 == 1 && curr != 0) NO; 
    else YES;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}