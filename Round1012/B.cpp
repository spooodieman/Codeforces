#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

ll getLoc(ll x, ll y, ll m){
    return (x*m + y);
}

void solve(){
    ll n,m; cin >> n >> m;
    vector<string> arr(n);
    set<ll> loc;
    invl(arr);
    ll ones = 0;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            ones += (arr[i][j] -'0');
        }
    }
    ll curr = 0;
    for(ll i = 0; i < m; i++){
        if(arr[0][i] == '1'){
            for(ll j = 0; j < n; j++){
                if(arr[j][i] == '0') break;
                if(loc.count(getLoc(j,i,m)) == 0){
                    curr++;
                    loc.insert(getLoc(j,i,m));
                }
            }
        }
    }
    for(ll i = 0; i < n; i++){
        if(arr[i][0] == '1'){
            
            for(ll j = 0; j < m; j++){
                if(arr[i][j] == '0') break;
                if(loc.count(getLoc(i,j,m)) == 0){
                    curr++;
                    loc.insert(getLoc(i,j,m));
                }
            }
        }
    }
    // cout << "LOCS curr " << curr <<" ones " << ones << '\n';
    // for(ll x : loc) cout << x << " ";
    // cout << '\n';
    if(curr != ones) cout << "NO" << '\n';
    else cout << "YES" << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll limit;
    cin >> limit;
    for(ll i = 0; i < limit; i++) solve();
}