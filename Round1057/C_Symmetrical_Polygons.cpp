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
    map<ll,ll> freq;
    ll ans = 0;
    ll use = 0;
    f(i,0,n){
        ll x; cin >> x;
        freq[x]++;
    }
    if(n == 3){
        ll first = 0;
        ll third = 0;
        for(auto x : freq){
            if(use == 0 && x.second != 2){
                cout << "0\n";
                return;
            }
            else if(use == 0) first = x.first;
            else third = x.first;
            use++;
        }
        if(first * 2 > third)cout << first * 2 + third << '\n';
        else cout << "0\n";
        return;
    }
    if(freq.size() == n){
        cout << "0\n";
        return;
    }
    map<ll,ll> user;
    ll mx = 0;
    for(auto it = freq.rbegin(); it != freq.rend(); it++){
        if(it->second % 2 == 1 && use < 2){
            mx = max(mx,it->first);
            ans += it->first;
            use++;
        }
        if(it->second/2 > 0){            
            mx = max(mx,it->first);
            user[it->first] = (it->second - (it->second%2)); 
        }
    }
    if(use == 1){
        if(user.find(ans) != user.end()){
            user[ans]--;
            if(user[ans] == 1) user[ans] = 0;
            ans *= 2;
        }
    }
    ll currsum = user.begin()->first * user.begin()->second;
    for(auto x : user){
        if(x.first * x.second > currsum){

        }
        ans += x.first * x.second;
    }
    cout << ans << '\n';

}  

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}