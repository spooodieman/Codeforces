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
    vi arr(n);
    invl(arr);
    map<ll,ll> freq;
    bool hasZero = false;
    f(i,0,n){
        if(arr[i] == 0)hasZero = true;
        freq[arr[i]]++;
    }    
    if(!hasZero){
        cout << "0\n";
        return;
    }   
    ll ans = 1;
    ll count = 0;
    ll oneFound = false;
    for(auto x : freq){
        if(freq[count] == 1 && !oneFound){
            ans = count + 1;
            oneFound = true;
        }
        else if((freq[count] == 1 && oneFound) || freq[count] == 0){
            break;
        }
        else if(freq[count] >= 2){
            ans = count+1;
        }
        else break;
        count++;

    }
    cout << ans << '\n';
    
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}