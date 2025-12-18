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

bool checker(vi &arrL, vi &arrR, ll k,ll n){
    ll befOverhead = 0;
    ll aftOverhead = 0;
    f(i,0,n){
        if(aftOverhead <= arrL[i]){
            aftOverhead += k;
            if(aftOverhead < arrL[i]) return false;
            else{
                aftOverhead = min(aftOverhead, arrR[i]);
                befOverhead = arrL[i];
            }
        }
        else if(befOverhead <= arrL[i] && aftOverhead >= arrL[i]){
            aftOverhead = min(aftOverhead + k, arrR[i]);
            befOverhead = arrL[i];
        }
        else if(befOverhead >= arrR[i]){
            befOverhead -= k;
            if(befOverhead > arrR[i]) return false;
            else{
                befOverhead = max(befOverhead, arrL[i]);
                aftOverhead = arrR[i];
            }
        }
        else if(befOverhead <= arrR[i] && aftOverhead >= arrR[i]){
            befOverhead = max(befOverhead-k,arrL[i]);
            aftOverhead = arrR[i];
        }
        else if(befOverhead <= arrL[i] && aftOverhead >= arrR[i]){
            aftOverhead = arrR[i];
            befOverhead = arrL[i];
        }
        else{
            aftOverhead = min(aftOverhead + k, arrR[i]);
            befOverhead = max(befOverhead - k, arrL[i]);
        }
    }   
    return true;
}

void solve(ll tt = 0){
    ll n; cin >> n;
    vi l(n),r(n);
    f(i,0,n)
        cin >> l[i] >> r[i];
    ll left = 0;
    ll right = 1e10;
    ll ans = 0;
    while(left <= right){
        ll mid = left + (right-left)/2;
        if(checker(l,r,mid,n)){
            ans = mid;
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }
    cout << ans << '\n';
    
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}