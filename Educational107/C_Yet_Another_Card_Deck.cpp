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
    ll n,q; cin >> n >> q;
    vi arr(q + n,-1);
    f(i,q,n + q)
        cin >> arr[i];
    ll ind = q-1;
    f(i,0,q){
        ll curr; cin >> curr;
        ll pos = 1;
        f(j,ind,n+q){
            if(arr[j] == -1) continue;
            if(arr[j] != curr) pos++;
            else{
                cout << pos << " ";
                arr[ind--] = arr[j];
                arr[j] = -1;
                break;
            }
        }
    }
    cout << '\n';
    
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
        solve();
}