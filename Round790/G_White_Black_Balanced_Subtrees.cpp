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

ll res = 0;

int dfs(vector<vi> &arr, int i, string &s){
    int curr = (s[i] == 'B')? 1 : -1;
    if(arr[i].empty()) return curr;
    for(ll child: arr[i]){
        curr += dfs(arr,child,s);
    }
    if(curr == 0) res++;
    return curr; 
}

void solve(ll tt = 0){
    res = 0;
    ll n; cin >> n;
    vector<vi> arr(n);
    f(i,1,n){
        ll vertex; cin >> vertex;
        vertex--;
        arr[vertex].push_back(i);
    }
    string s; cin >> s;
    dfs(arr,0,s);
    cout << res << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}