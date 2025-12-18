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
    ll n,k,k2; cin >> n >> k >> k2;
    k += k2;

    vi a(n),b(n); invl(a); invl(b);

    if(n == 1){
        ll curr = abs(a[0] - b[0]);
        if(curr >= k){
            curr -= k;
            cout << curr * curr << '\n'; 
        }
        else{
            if(curr%2 == k%2) cout << "0\n";
            else cout << "1\n";
        }
        return;
    }

    priority_queue<ll> q;
    f(i,0,n) {
        q.push(abs(a[i] - b[i]));
    }

    while(k){
        ll curr = q.top();
        q.pop();
        if(q.top() == 0){
            if(curr >= k){
                curr -= k;
                cout << curr * curr << '\n'; 
            }
            else{
                if(curr%2 == k%2) cout << "0\n";
                else cout << "1\n";
            }
            return;
        }
        if(curr - q.top() >= k){
            curr -= k;
            k = 0;
        }
        else{
            k -= (curr - q.top());
            k--;
            curr = (q.top()-1);
        }
        q.push(curr);
    }
    ll ans = 0;
    while(!q.empty()){
        ll curr = q.top();
        q.pop();
        ans += (curr*curr);
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
        solve();
}