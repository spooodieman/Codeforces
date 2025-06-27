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
    ll n,m,x,y; cin >> n >> m >> x >> y;
    ll answer = 1;
    ll dir = 0;
    ll area = 0;
    if((x - 1) * m > area) {
        dir = 1;
        area = (x - 1) * m;
    }
    if((m-y) * n > area){
        dir = 2;
        area = (m-y) * n;
    }
    if((n-x)* m > area){
        dir = -1;
        area = (n-x)* m;
    }
    if((y-1) * n > area){
        dir = -2;
        area = (y-1) * n;
    }
    if(dir == 1){
        n -= (x-1);
    }
    else if(dir == 2){
        m = y;
    }
    else if(dir == -1){
        n = x;
    }
    else{
        m -= (y -1);
    }
    cout << "DIR " << dir << " N " << n << " M " << m << '\n';
    area = n * m;
    while(n != 1){
        answer++;
        n>>=1;
    }
    while(m != 1){
        answer++;
        m >>= 1;
    }
    cout << answer << '\n';
    
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}