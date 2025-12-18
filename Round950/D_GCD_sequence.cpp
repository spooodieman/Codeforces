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
    vi arr(n); invl(arr);
    vi b(n+1,0);
    b[n] = INF;
    f(i,1,n){
        b[i] = __gcd(arr[i-1],arr[i]);
    }
    ll pos = 0;
    ll ind = 0;
    f(i,1,n){
        if(b[i] < b[i-1]){
            ind = i;
            pos++;
        }
    }
    cout << "B ";
    f(i,0,n) cout << b[i] << " ";
    cout << '\n';
    if(pos == 0) YES;
    else if(pos > 1) NO;
    else{
        if(ind == n-1 || ind == 1) YES;
        else{
            f(i,ind-1,ind+1){
                ll curr = __gcd(arr[i-1],arr[i+1]);
                if(curr >= b[i-1] && curr <= b[i+2]) {
                    YES;
                    return;
                }
               
            }
            NO;
        }
    }

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}