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

    bool ok = false;
    ll one = 0;
    f(i,0,n){
        if(arr[i] == 1) one++;
        ll curr = arr[i];
        f(j,i,n){
            curr = __gcd(curr,arr[j]);
            if(curr == 1){
                ok = true;
                break;
            }
        }
    }
    if(!ok){
        cout << "-1";
        return;
    }
    else if(one > 0){
        cout << n - one;
        return;
    }
    ll ans = 1e9;
    f(i,0,n){
        ll curr = arr[i];
        f(j,i,n){
            curr = __gcd(curr,arr[j]);
            if(curr == 1){
                ans = min(ans, j-i + (n - one - 1));
            }
        }
    }
    cout << ans;

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
        solve();
}