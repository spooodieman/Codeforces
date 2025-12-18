#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()
#define f(p,q,n) for(auto p = q; p < n; p++)

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

bool recurs(ll l, ll r, ll n, ll size, ll mode){
    if(!mode){
        cout << 1 << " " << l << " " << r << endl;
        ll res; cin >> res; 
        cout << 2 << " " << l << " " << r << endl;
        ll res2; cin >> res2;
        
        if(res2 == res) return false;

        if(res2 - res != size){
            cout << "! " << r - (res2-res-1) << " " << ((r -(res2-res-1)) + (size - 1)) << endl;
            return true;
        }

        if(l == r){
            cout << "! " << l << " " << l + size - 1 << endl;
            return true;
        }
    }
    ll mid = (l+r)/2;
    if(recurs(l,mid,n,size,0))return true;
    if(recurs(mid+1,r,n,size,1))return true;
}

void solve(ll tt = 0){
    ll n; cin >> n;
    
    cout << 1 << " " << 1 << " " << n << endl;
    ll res; cin >> res;
    cout << 2 << " " << 1 << " " << n << endl;
    ll res2; cin >> res2;

    ll size = res2-res;
    recurs(1,n,n,size,0);
}

int main(){
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}