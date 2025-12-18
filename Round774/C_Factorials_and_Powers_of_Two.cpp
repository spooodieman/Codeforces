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

vi powers;
vi fact(16,1);

void precomp(){
    f(i,2,16){
        fact[i] = fact[i-1] * i;
    }
    f(i,0,41){
        powers.push_back(1LL << i);
    }
}

void solve(ll tt = 0){
    ll n; cin >> n;
    queue<tuple<ll,ll,set<ll>,set<ll>>> q;
    q.push({n,0,{},{}});
    while(!q.empty()){
        auto [x, tim, vis1, vis2] = q.front();
        q.pop();
        if(x == 0){
            cout << tim << '\n';
            return;
        }
        ll curr = upper_bound(all(fact),x) - fact.begin();
        ll curr2 = upper_bound(all(powers),x) - powers.begin();
        curr--; curr2--;
        while(curr > 0 && vis1.count(fact[curr])) curr--;
        if(curr >= 0){
            auto vis1next = vis1;
            vis1next.insert(fact[curr]);
            q.push({x - fact[curr], tim+1, vis1next, vis2});
        }
        while(curr2 > 0 && vis2.count(powers[curr2])) curr2--;
        if(curr2 >= 0){
            auto vis2next = vis2;
            vis2next.insert(powers[curr2]);
            q.push({x - powers[curr2], tim+1, vis1, vis2next});
        }
    }

    cout << "-1\n";
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    precomp();
    for(ll i = 1; i <= t; i++)
        solve();
}